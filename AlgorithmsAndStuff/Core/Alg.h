#pragma once

#include <string>

class Alg
{
public:
    void Calc(const std::string& fileName);
    
protected:
    virtual void Calc_Internal(const std::string& input);
};
