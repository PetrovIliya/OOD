#include "ReplaceEncryptor.h"

#include <numeric>
#include <memory>
#include <random>
#include <algorithm>
#include <cstdlib>

ReplaceEncryptor::ReplaceEncryptor(size_t key)
        : encodeTable(UINT8_MAX + 1)
        , decodeTable(encodeTable.size())
{
    std::iota(encodeTable.begin(), encodeTable.end(), '\0');
    std::shuffle(encodeTable.begin(), encodeTable.end(), std::mt19937(key));
    for (size_t i = 0; i < encodeTable.size(); ++i)
    {
        decodeTable[encodeTable[i]] = static_cast<uint8_t>(i);
    }
}

uint8_t ReplaceEncryptor::Encrypt(uint8_t ch)
{
    return encodeTable[ch];
}

uint8_t ReplaceEncryptor::Decrypt(uint8_t ch)
{
    return decodeTable[ch];
}