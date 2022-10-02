#ifndef TASK3_COMPRESSOUTPUTSTREAMDECORATOR_H
#define TASK3_COMPRESSOUTPUTSTREAMDECORATOR_H


#include "../outputStreamDecorator/OutputStreamDecorator.h"

class CompressOutputStreamDecorator : public OutputStreamDecorator
{
public:
    explicit CompressOutputStreamDecorator(std::unique_ptr<IOutputStream>&& stream);
    ~CompressOutputStreamDecorator() override;

    void WriteByte(uint8_t data) override;
    void WriteBlock(const void* srcData, std::streamsize size) override;

private:
    uint8_t m_currCh{};
    size_t m_count = 0;

    void FlushByte();
};


#endif //TASK3_COMPRESSOUTPUTSTREAMDECORATOR_H
