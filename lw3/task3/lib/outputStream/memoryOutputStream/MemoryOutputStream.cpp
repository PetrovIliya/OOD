#include "MemoryOutputStream.h"

MemoryOutputStream::MemoryOutputStream(std::ostringstream& stream)
        : m_memoryStream(stream)
{
}

void MemoryOutputStream::WriteByte(uint8_t data)
{
    m_memoryStream.put(data);
}

void MemoryOutputStream::WriteBlock(const void* srcData, std::streamsize size)
{
    const char* buff = static_cast<const char*>(srcData);
    m_memoryStream.write(buff, size);
}