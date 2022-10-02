#include "CompressOutputStreamDecorator.h"
#include "vector"

CompressOutputStreamDecorator::CompressOutputStreamDecorator(std::unique_ptr<IOutputStream>&& stream)
        : OutputStreamDecorator(std::move(stream))
{
}

CompressOutputStreamDecorator::~CompressOutputStreamDecorator()
{
    FlushByte();
}

void CompressOutputStreamDecorator::WriteByte(uint8_t data)
{
    if (data != m_currCh || m_count >= UINT8_MAX)
    {
        FlushByte();
        m_currCh = data;
    }
    ++m_count;
}

void CompressOutputStreamDecorator::FlushByte()
{
    if (m_count > 0)
    {
        OutputStreamDecorator::WriteByte(static_cast<uint8_t>(m_count));
        OutputStreamDecorator::WriteByte(m_currCh);
        m_count = 0;
    }
}

void CompressOutputStreamDecorator::WriteBlock(const void* srcData, std::streamsize size)
{
    const auto * buff = static_cast<const uint8_t*>(srcData);
    std::vector<uint8_t> compressedBuff;

    for (std::streamsize i = 0; i < size; ++i)
    {
        uint8_t ch = *(buff + i);
        WriteByte(ch);
    }
}