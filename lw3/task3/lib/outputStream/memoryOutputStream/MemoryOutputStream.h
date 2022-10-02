#ifndef TASK3_MEMORYOUTPUTSTREAM_H
#define TASK3_MEMORYOUTPUTSTREAM_H

#include "../IOutputStream.hpp"
#include <sstream>

class MemoryOutputStream : public IOutputStream
{
public:
    explicit MemoryOutputStream(std::ostringstream& stream);

    void WriteByte(uint8_t data) override;
    void WriteBlock(const void * srcData, std::streamsize size) override;

private:
    std::ostream& m_memoryStream;
};

#endif //TASK3_MEMORYOUTPUTSTREAM_H
