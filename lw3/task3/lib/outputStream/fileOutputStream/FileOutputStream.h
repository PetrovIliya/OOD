#ifndef TASK3_FILEOUTPUTSTREAM_H
#define TASK3_FILEOUTPUTSTREAM_H

#include "../IOutputStream.hpp"
#include <fstream>

class FileOutputStream : public IOutputStream
{
public:
    explicit FileOutputStream(std::string const& fileName);

    void WriteByte(uint8_t data) override;
    void WriteBlock(const void * srcData, std::streamsize size) override;

private:
    std::ofstream m_file;
};

#endif //TASK3_FILEOUTPUTSTREAM_H
