#ifndef TASK3_IOUTPUTSTREAM_HPP
#define TASK3_IOUTPUTSTREAM_HPP

#include <string>
#include <cstdint>

class IOutputStream
{
public:
    // Записывает в поток данных байт
    // Выбрасывает исключение std::ios_base::failure в случае ошибки
    virtual void WriteByte(uint8_t data) = 0;

    // Записывает в поток блок данных размером size байт,
    // располагающийся по адресу srcData,
    // В случае ошибки выбрасывает исключение std::ios_base::failure
    virtual void WriteBlock(const void * srcData, std::streamsize size) = 0;

    virtual ~IOutputStream() = default;
};

#endif //TASK3_IOUTPUTSTREAM_HPP
