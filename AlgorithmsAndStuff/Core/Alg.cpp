﻿#include "Alg.h"

#include <iostream>
#include <ctime>
#include <fstream>

void Alg::Calc(const std::string& fileName)
{
    std::fstream newfile;
    newfile.open("In/" + fileName + ".txt", std::ios::in);
    
    std::string tp;
    if (newfile.is_open())
    { 
        while(getline(newfile, tp))
        {
            std::cout << tp << "\n";
        }
        newfile.close();
    }
    else
    {
        std::cout<<"Can't find text file with name: " << fileName;
    }
    const std::clock_t start = std::clock();
    Calc_Internal(tp);
    std::cout<<"\nExecution time: " << ( std::clock() - start ) / static_cast<double>(CLOCKS_PER_SEC);
}

void Alg::Calc_Internal(const std::string& input)
{
    std::cout << input;
}