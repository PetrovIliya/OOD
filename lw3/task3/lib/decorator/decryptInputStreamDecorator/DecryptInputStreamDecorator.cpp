#include "DecryptInputStreamDecorator.h"

DecryptInputStreamDecorator::DecryptInputStreamDecorator(std::unique_ptr<IInputStream>&& stream, size_t key)
        : InputStreamDecorator(std::move(stream))
        , m_encryptor(key)
{
}

uint8_t DecryptInputStreamDecorator::ReadByte()
{
    return m_encryptor.Decrypt(InputStreamDecorator::ReadByte());
}

std::streamsize DecryptInputStreamDecorator::ReadBlock(void* dstBuffer, std::streamsize size)
{
    std::streamsize newSize = InputStreamDecorator::ReadBlock(dstBuffer, size);
    auto* buff = static_cast<uint8_t*>(dstBuffer);

    for (size_t i = 0; i < newSize; ++i)
    {
        uint8_t ch = *(buff + i);
        *(buff + i) = m_encryptor.Decrypt(ch);
    }
    return newSize;
}