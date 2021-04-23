#pragma once
#include "Command.h"
#include <memory>
#include "MathObject.h"
class MathCommand :
    public Command
{
public:
    virtual void addArg(const std::shared_ptr<MathObject>& arg);
    virtual std::vector<std::shared_ptr<MathObject>> getArgs() const;
    std::shared_ptr<MathObject> getResult() const;
    virtual void addArgFront(const std::shared_ptr<MathObject>& arg);
    virtual ~MathCommand() = default;
    //virtual void execute() = 0;
protected:
    std::vector < std::shared_ptr<MathObject>> _args;
    std::shared_ptr<MathObject> _result;
};

