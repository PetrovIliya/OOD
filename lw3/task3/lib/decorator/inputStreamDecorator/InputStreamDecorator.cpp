#include "InputStreamDecorator.h"

InputStreamDecorator::InputStreamDecorator(std::unique_ptr<IInputStream>&& stream)
        : m_stream(std::move(stream))
{
}

bool InputStreamDecorator::IsEOF() const
{
    return m_stream->IsEOF();
}

uint8_t InputStreamDecorator::ReadByte()
{
    return m_stream->ReadByte();
}

std::streamsize InputStreamDecorator::ReadBlock(void* dstBuffer, std::streamsize size)
{
    return m_stream->ReadBlock(dstBuffer, size);
}