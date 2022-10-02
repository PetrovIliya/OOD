#include "FileOutputStream.h"

using namespace std;

FileOutputStream::FileOutputStream(string const& fileName)
        : m_file(fileName, ifstream::binary)
{
    if (!m_file)
    {
        throw ios_base::failure("Can't create file: " + fileName);
    }
}

void FileOutputStream::WriteByte(uint8_t data)
{
    WriteBlock(&data, 1);
}

void FileOutputStream::WriteBlock(const void * srcData, std::streamsize size)
{
    if (!m_file.write(reinterpret_cast<const char*>(srcData), size * sizeof(uint8_t)))
    {
        throw ios_base::failure("Failed to write data");
    }
}