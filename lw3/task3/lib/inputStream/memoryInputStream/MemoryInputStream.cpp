#include <stdexcept>
#include "MemoryInputStream.h"

using namespace std;

MemoryInputStream::MemoryInputStream(std::istream& stream)
        : m_memoryStream(stream)
{
}

bool MemoryInputStream::IsEOF() const
{
    return m_memoryStream.eof();
}

uint8_t MemoryInputStream::ReadByte()
{
    if (IsEOF())
    {
        throw std::ios_base::failure("Attempt to read EOF");
    }
    return static_cast<uint8_t>(m_memoryStream.get());
}

std::streamsize MemoryInputStream::ReadBlock(void* dstBuffer, std::streamsize size)
{
    return m_memoryStream.readsome(static_cast<char*>(dstBuffer), size);
}