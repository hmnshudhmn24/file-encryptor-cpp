#include "encryptor.h"
#include <iostream>

using namespace std;

int main() {
    int choice;
    string filename, key;

    while (true) {
        cout << "\n1. Encrypt File\n2. Decrypt File\n3. Exit\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 3) {
            cout << "Exiting...\n";
            break;
        }

        cout << "Enter filename: ";
        getline(cin, filename);

        cout << "Enter encryption key: ";
        getline(cin, key);

        if (choice == 1) {
            Encryptor::encryptFile(filename, key);
        } else if (choice == 2) {
            Encryptor::decryptFile(filename, key);
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
