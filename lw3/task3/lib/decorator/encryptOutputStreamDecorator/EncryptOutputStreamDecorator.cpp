#include "EncryptOutputStreamDecorator.h"

EncryptOutputStreamDecorator::EncryptOutputStreamDecorator(std::unique_ptr<IOutputStream>&& stream, size_t key)
        : OutputStreamDecorator(std::move(stream))
        , m_encryptor(key)
{
}

void EncryptOutputStreamDecorator::WriteByte(uint8_t data)
{
    OutputStreamDecorator::WriteByte(m_encryptor.Encrypt(data));
}

void EncryptOutputStreamDecorator::WriteBlock(const void* srcData, std::streamsize size)
{
    const auto* buff = static_cast<const uint8_t*>(srcData);
    std::vector<uint8_t> encodedBuff(static_cast<size_t>(size));

    for (size_t i = 0; i < encodedBuff.size(); ++i)
    {
        encodedBuff[i] = m_encryptor.Encrypt(*(buff + i));
    }

    OutputStreamDecorator::WriteBlock(encodedBuff.data(), size);
}