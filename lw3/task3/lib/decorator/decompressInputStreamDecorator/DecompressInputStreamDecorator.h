#ifndef TASK3_DECOMPRESSINPUTSTREAMDECORATOR_H
#define TASK3_DECOMPRESSINPUTSTREAMDECORATOR_H

#include "../inputStreamDecorator/InputStreamDecorator.h"
#include "memory"

class DecompressInputStreamDecorator : public InputStreamDecorator
{
public:
    explicit DecompressInputStreamDecorator(std::unique_ptr<IInputStream>&& stream);
    ~DecompressInputStreamDecorator() override = default;

    bool IsEOF() const override;
    uint8_t ReadByte() override;
    std::streamsize ReadBlock(void* dstBuffer, std::streamsize size) override;

private:
    uint8_t m_currCh{};
    size_t m_count = 0;
};

#endif //TASK3_DECOMPRESSINPUTSTREAMDECORATOR_H
