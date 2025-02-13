#include "encryptor.h"
#include <iostream>
#include <fstream>

using namespace std;

void Encryptor::processFile(const string& filename, const string& key, bool encrypt) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    string outputFile = encrypt ? (filename + ".enc") : (filename + ".dec");
    ofstream outFile(outputFile, ios::binary);
    if (!outFile) {
        cerr << "Error creating output file." << endl;
        return;
    }

    char ch;
    size_t keyLen = key.length();
    size_t i = 0;

    while (inFile.get(ch)) {
        ch ^= key[i % keyLen];
        outFile.put(ch);
        i++;
    }

    inFile.close();
    outFile.close();
    cout << (encrypt ? "Encryption" : "Decryption") << " complete: " << outputFile << endl;
}

void Encryptor::encryptFile(const string& filename, const string& key) {
    processFile(filename, key, true);
}

void Encryptor::decryptFile(const string& filename, const string& key) {
    processFile(filename, key, false);
}
