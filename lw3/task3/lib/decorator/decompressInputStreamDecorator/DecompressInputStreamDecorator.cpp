#include "DecompressInputStreamDecorator.h"

DecompressInputStreamDecorator::DecompressInputStreamDecorator(std::unique_ptr<IInputStream>&& stream)
        : InputStreamDecorator(std::move(stream))
{
}

bool DecompressInputStreamDecorator::IsEOF() const
{
    return (m_count == 0) && InputStreamDecorator::IsEOF();
}

uint8_t DecompressInputStreamDecorator::ReadByte()
{
    if (m_count == 0)
    {
        m_count = InputStreamDecorator::ReadByte();
        if (!InputStreamDecorator::IsEOF())
        {
            m_currCh = InputStreamDecorator::ReadByte();
        }
        else
        {
            m_count = 0;
        }
    }
    if (m_count != 0)
    {
        --m_count;
    }
    return (m_currCh);
}

std::streamsize DecompressInputStreamDecorator::ReadBlock(void* dstBuffer, std::streamsize size)
{
    auto* buff = static_cast<uint8_t*>(dstBuffer);

    for (std::streamsize i = 0; i < size; ++i)
    {
        if (IsEOF())
        {
            return i;
        }
        *(buff + i) = ReadByte();
    }
    return size;
}