#ifndef LW2_BASEOBSERVABLE_HPP
#define LW2_BASEOBSERVABLE_HPP

#include <set>
#include "../observers/IObserver.h"
#include "IObservable.h"

// Реализация интерфейса IObservable
template <class T>
class BaseObservable : public IObservable<T>
{
public:
    typedef IObserver<T> ObserverType;

    void RegisterObserver(ObserverType & observer) override
    {
        m_observers.insert(&observer);
    }

    void NotifyObservers() override
    {
        T data = GetChangedData();
        for (auto & observer : m_observers)
        {
            observer->Update(data);
        }
    }

    void RemoveObserver(ObserverType & observer) override
    {
        m_observers.erase(&observer);
    }

protected:
    // Классы-наследники должны перегрузить данный метод,
    // в котором возвращать информацию об изменениях в объекте
    virtual T GetChangedData()const = 0;

private:
    std::set<ObserverType *> m_observers;
};

#endif //LW2_BASEOBSERVABLE_HPP
