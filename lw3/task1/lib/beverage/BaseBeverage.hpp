#ifndef OOD_BASEBAVARAGE_H
#define OOD_BASEBAVARAGE_H

#include "iostream"
#include "IBeverage.h"

class BaseBeverage : public IBeverage
{
public:
    explicit BaseBeverage(const std::string & description)
            :m_description(description)
    {}

    std::string GetDescription() const override
    {
        return m_description;
    }

private:
    std::string m_description;
};


#endif //OOD_BASEBAVARAGE_H
