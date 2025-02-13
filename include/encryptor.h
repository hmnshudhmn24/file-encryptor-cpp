#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

#include <string>

class Encryptor {
public:
    static void encryptFile(const std::string& filename, const std::string& key);
    static void decryptFile(const std::string& filename, const std::string& key);
private:
    static void processFile(const std::string& filename, const std::string& key, bool encrypt);
};

#endif // ENCRYPTOR_H
