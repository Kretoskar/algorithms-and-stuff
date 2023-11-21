#pragma once

#include <string>

class Alg
{
public:
    void CalcWithFile(const std::string& fileName);
    void Calc();
    
protected:
    virtual void CalcWithFile_Internal(const std::string& input);
    virtual void Calc_Internal();
};
