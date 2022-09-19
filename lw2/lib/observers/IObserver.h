#ifndef LW2_IOBSERVER_H
#define LW2_IOBSERVER_H

template <typename T>
class IObserver
{
public:
    virtual void Update(T const& data) = 0;
    virtual ~IObserver() = default;
};

#endif //LW2_IOBSERVER_H