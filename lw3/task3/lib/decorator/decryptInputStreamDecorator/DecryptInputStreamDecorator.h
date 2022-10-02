#ifndef TASK3_DECRYPTINPUTSTREAMDECORATOR_H
#define TASK3_DECRYPTINPUTSTREAMDECORATOR_H

#include "../inputStreamDecorator/InputStreamDecorator.h"
#include "../../replaceEncryptor/ReplaceEncryptor.h"

class DecryptInputStreamDecorator : public InputStreamDecorator
{
public:
    DecryptInputStreamDecorator(std::unique_ptr<IInputStream>&& stream, size_t key);
    ~DecryptInputStreamDecorator() override = default;

    uint8_t ReadByte() override;
    std::streamsize ReadBlock(void* dstBuffer, std::streamsize size) override;

private:
    ReplaceEncryptor m_encryptor;
};

#endif //TASK3_DECRYPTINPUTSTREAMDECORATOR_H
