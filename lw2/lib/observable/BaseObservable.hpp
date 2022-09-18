#ifndef LW2_BASEOBSERVABLE_HPP
#define LW2_BASEOBSERVABLE_HPP

#include <set>
#include "../observers/IObserver.h"
#include "IObservable.h"

template <typename T>
struct PrioritySetComparator
{
    bool operator()(const std::pair<T, size_t>& rp, const std::pair<T, size_t>& lp) const
    {
        return rp.second < lp.second || (rp.second == lp.second && rp.first < lp.first);
    }
};

template <class T>
class BaseObservable : public IObservable<T>
{
public:
    typedef IObserver<T> ObserverType;

    void RegisterObserver(ObserverType & observer, int priority) override
    {
        m_observers.insert(std::make_pair(&observer, priority));
    }

    void NotifyObservers() override
    {
        clearRemoveList();
        T data = GetChangedData();
        for (auto & observer : m_observers)
        {
            observer.first->Update(data);
        }
    }

    void RemoveObserver(ObserverType & observer) override
    {
        m_removeList.insert(&observer);
    }

protected:
    virtual T GetChangedData()const = 0;

private:
    std::set<std::pair<ObserverType*, size_t>, PrioritySetComparator<ObserverType*>> m_observers;
    std::set<ObserverType*> m_removeList;

    void clearRemoveList()
    {
        for (auto& observer : m_removeList)
        {
            std::pair<ObserverType*, size_t> val(observer, NULL);
            m_observers.erase(val);
        }
        m_removeList.clear();
    }
};

#endif //LW2_BASEOBSERVABLE_HPP
