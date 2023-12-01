
#include "Alg.h"
#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>

void Alg::CalcWithFile(const std::string& fileName)
{
    std::fstream newfile;
    newfile.open("In/" + fileName + ".txt", std::ios::in);
    
    std::string tp;
    std::vector<std::string> lines;
    if (newfile.is_open())
    { 
        while(getline(newfile, tp))
        {
            lines.push_back(tp);
        }
        newfile.close();
    }
    else
    {
        std::cout<<"Can't find text file with name: " << fileName;
    }
    const std::clock_t start = std::clock();
    CalcWithFile_Internal(lines);
    std::cout<<"\nExecution time: " << ( std::clock() - start ) / static_cast<double>(CLOCKS_PER_SEC);
}

void Alg::Calc()
{
    const std::clock_t start = std::clock();
    Calc_Internal();
    std::cout<<"\nExecution time: " << ( std::clock() - start ) / static_cast<double>(CLOCKS_PER_SEC);
}

void Alg::CalcWithFile_Internal(std::vector<std::string>& input)
{
    for (std::string line : input)
    {
        std::cout << line << std::endl;
    }
}

void Alg::Calc_Internal()
{
    std::cout << "test";
}