#include <iostream>
#include <fstream>
#include <cctype>

#include "encryption.h"

using namespace std;

bool caesar(string &content, bool encrypted)
{
    int shift; 
    cout << "Enter a shift value (1 - 25): ";
    cin >> shift; 

    if(!encrypted) shift = shift * -1;

    for(char &c : content){
        if(isalpha(c)){
            char base = isupper(c) ? 'A' : 'a';
            c = static_cast<char>((c - base + shift + 26) % 26 + base);
        }
    }

    return true;
}


bool encrypt_file(const string &filename, bool encrypted)
{
    ifstream file(filename);
    if(!file) return false;

    string content((istreambuf_iterator<char>(file)), {});
    file.close();

    if(caesar(content, encrypted)){
        ofstream output(encrypted ? "encrypted_" + filename: "unencrypted_" + filename);
        if(!output) return false;

        output << content;
        output.close();
    }

    return true;
}