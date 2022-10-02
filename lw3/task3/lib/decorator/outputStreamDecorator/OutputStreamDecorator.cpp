#include "OutputStreamDecorator.h"

OutputStreamDecorator::OutputStreamDecorator(std::unique_ptr<IOutputStream>&& stream)
        : m_stream(std::move(stream))
{
}

void OutputStreamDecorator::WriteByte(uint8_t data)
{
    m_stream->WriteByte(data);
}

void OutputStreamDecorator::WriteBlock(const void* srcData, std::streamsize size)
{
    m_stream->WriteBlock(srcData, size);
}