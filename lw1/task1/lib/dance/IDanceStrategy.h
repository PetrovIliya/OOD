#ifndef TASK1_IDANCESTRATEGY_H
#define TASK1_IDANCESTRATEGY_H

class IDanceStrategy
{
public:
    virtual ~IDanceStrategy() = default;
    virtual void Dance() = 0;
};

#endif //TASK1_IDANCESTRATEGY_H
