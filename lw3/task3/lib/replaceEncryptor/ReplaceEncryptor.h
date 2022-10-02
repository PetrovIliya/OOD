#ifndef TASK3_REPLACEENCRYPTOR_H
#define TASK3_REPLACEENCRYPTOR_H

#include <iostream>
#include <vector>

class ReplaceEncryptor
{
public:
    explicit ReplaceEncryptor(size_t key);

    uint8_t Encrypt(uint8_t ch);
    uint8_t Decrypt(uint8_t ch);

private:
    std::vector<uint8_t> encodeTable;
    std::vector<uint8_t> decodeTable;
};

#endif //TASK3_REPLACEENCRYPTOR_H
