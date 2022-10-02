
#ifndef TASK3_MEMORYINPUTSTREAM_H
#define TASK3_MEMORYINPUTSTREAM_H

#include "../IInputStream.hpp"
#include <sstream>

class MemoryInputStream : public IInputStream
{
public:
    explicit MemoryInputStream(std::istream& stream);

    bool IsEOF() const override;
    uint8_t ReadByte() override;
    std::streamsize ReadBlock(void * dstBuffer, std::streamsize size) override;

private:
    std::istream& m_memoryStream;
    size_t m_offset = 0;
};

#endif //TASK3_MEMORYINPUTSTREAM_H
