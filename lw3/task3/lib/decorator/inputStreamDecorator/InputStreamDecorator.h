#ifndef TASK3_INPUTSTREAMDECORATOR_H
#define TASK3_INPUTSTREAMDECORATOR_H

#include "../../inputStream/IInputStream.hpp"
#include "memory"

class InputStreamDecorator : public IInputStream
{
public:
    ~InputStreamDecorator() override = default;

    bool IsEOF() const override;
    uint8_t ReadByte() override;
    std::streamsize ReadBlock(void* dstBuffer, std::streamsize size) override;

protected:
    InputStreamDecorator(std::unique_ptr<IInputStream>&& stream);

private:
    std::unique_ptr<IInputStream> m_stream;
};

#endif //TASK3_INPUTSTREAMDECORATOR_H
