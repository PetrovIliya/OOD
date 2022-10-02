#ifndef TASK3_ENCRYPTOUTPUTSTREAMDECORATOR_H
#define TASK3_ENCRYPTOUTPUTSTREAMDECORATOR_H

#include "../outputStreamDecorator/OutputStreamDecorator.h"
#include "../../replaceEncryptor/ReplaceEncryptor.h"

class EncryptOutputStreamDecorator : public OutputStreamDecorator
{
public:
    EncryptOutputStreamDecorator(std::unique_ptr<IOutputStream>&& stream, size_t key);
    ~EncryptOutputStreamDecorator() override = default;

    void WriteByte(uint8_t data) override;
    void WriteBlock(const void* srcData, std::streamsize size) override;

private:
    ReplaceEncryptor m_encryptor;
};


#endif //TASK3_ENCRYPTOUTPUTSTREAMDECORATOR_H
