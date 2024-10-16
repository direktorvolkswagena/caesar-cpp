# **Caesar Cipher in C++**

This project implements the **Caesar cipher** encryption and decryption algorithm in C++.

## **About the Caesar Cipher**

The Caesar cipher is a simple substitution cipher where each letter in the plaintext is shifted by a certain number of positions down the alphabet. For example, with a shift of 3, `hello` becomes `khoor`.

## **Getting Started**

### **Prerequisites**

- A C++ compiler (e.g., GCC, Clang)

### **Building the Project**

1. Clone the repository:

   ```bash
   git clone https://github.com/direktorvolkswagena/caesar-cpp.git
   ```

2. Navigate to the project directory:

   ```bash
   cd caesar-cpp
   ```

3. Compile the source code:

   ```bash
   make all
   ```

### **Running the Project**

Run the compiled program:

```bash
./program.exe
```

The program will prompt you for the following inputs:

- **Input:** The name of the `.txt` file you want to encrypt or decrypt.
- **Shift:** The number of positions to shift the letters.
- **Encrypt/Decrypt:** Choose whether you want to encrypt (`e`) or decrypt (`d`) the text.

The program will then generate a file with the encrypted or decrypted text.

### **Example**

- **Input File:** `test.txt` (contents: `hello world`)
  
- **Execution:**

   ```bash
   Input: test.txt
   Shift: 3
   Encrypt/Decrypt (e/d): e
   ```

- **Output File:** `encrypted_test.txt` (contents: `khoor zroug`)

## **Contributing**

If you'd like to contribute to this project, feel free to fork the repository and submit a pull request.
```

