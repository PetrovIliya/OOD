#ifndef TASK3_FILEINPUTSTREAM_H
#define TASK3_FILEINPUTSTREAM_H

#include "../IInputStream.hpp"
#include <fstream>
#include <memory>

class FileInputStream : public IInputStream
{
public:
    explicit FileInputStream(std::string const& fileName);
    explicit FileInputStream(std::istream & file);

    bool IsEOF()const override;
    uint8_t ReadByte() override;
    std::streamsize ReadBlock(void * dstBuffer, std::streamsize size) override;

private:
    void UpdateEofBit();

    std::unique_ptr<std::istream> m_file;
};

#endif //TASK3_FILEINPUTSTREAM_H
