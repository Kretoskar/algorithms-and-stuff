#pragma once

#include <string>
#include <vector>

class Alg
{
public:
    void CalcWithFile(const std::string& fileName);
    void Calc();
    
protected:
    virtual void CalcWithFile_Internal(std::vector<std::string>& input);
    virtual void Calc_Internal();
};
