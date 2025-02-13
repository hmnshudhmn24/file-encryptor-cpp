# File Encryptor

A **C++ File Encryption & Decryption Tool** that:

- Encrypts text files using XOR cipher
- Decrypts encrypted files back to text
- Uses a user-defined encryption key

## Project Structure
```
file_encryptor/
│── include/
│   ├── encryptor.h
│── src/
│   ├── encryptor.cpp
│── main.cpp
│── README.md
```

## How to Compile and Run
1. Open a terminal and navigate to the project directory.
2. Compile the project using:
   ```sh
   g++ main.cpp src/encryptor.cpp -o encryptor
   ```
3. Run the executable:
   ```sh
   ./encryptor
   ```

## Usage
1. Choose encryption or decryption.
2. Provide a filename and encryption key.
3. Encrypted files have a `.enc` extension, and decrypted files have a `.dec` extension.

## Requirements
- C++ compiler (GCC, Clang, MSVC)
