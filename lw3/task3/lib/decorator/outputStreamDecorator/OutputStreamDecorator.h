#ifndef TASK3_OUTPUTSTREAMDECORATOR_H
#define TASK3_OUTPUTSTREAMDECORATOR_H

#include "../../outputStream/IOutputStream.hpp"
#include "memory"

class OutputStreamDecorator : public IOutputStream
{
public:
    ~OutputStreamDecorator() override = default;

    void WriteByte(uint8_t data) override;
    void WriteBlock(const void* srcData, std::streamsize size) override;

protected:
    explicit OutputStreamDecorator(std::unique_ptr<IOutputStream>&& stream);

private:
    std::unique_ptr<IOutputStream> m_stream;
};


#endif //TASK3_OUTPUTSTREAMDECORATOR_H
