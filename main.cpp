#include <iostream>
#include "encryption.h"

using namespace std;

int main()
{
    string filename;
    char mode;

    cout << "Enter the name of the file: "; 
    getline(cin >> ws, filename); // ignores spaces

    cout << "Encrypt (e) / Decrypt (d) ? ";
    cin >> mode;

    switch(mode){
        case 'e':
        case 'E':
            if (encrypt_file(filename, true)){
                cout << "Encryption successful." << endl;
            } else {
                cerr << "Error encrypting file." << endl;
            }
        break;
        break;

        case 'd':
        case 'D':
            if(encrypt_file(filename, false)){
            cout << "Decryption successful." << endl;
            } else {
                cerr << "Error decrypting file." << endl;
            }
        break;
        break;

        default:
            cerr << "Invalid mode. Use either 'e' or 'd'." << endl;
    }


    return 0;
}