#ifndef LW2_IOBSERVABLE_H
#define LW2_IOBSERVABLE_H

#include <set>
#include "../observers/IObserver.h"

template <typename T>
class IObservable
{
public:
    virtual ~IObservable() = default;
    virtual void RegisterObserver(IObserver<T> & observer) = 0;
    virtual void NotifyObservers() = 0;
    virtual void RemoveObserver(IObserver<T> & observer) = 0;
};

#endif //LW2_IOBSERVABLE_H
