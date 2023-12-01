#include "Day1.h"

#include <iostream>
#include <regex>

void Day1::CalcWithFile_Internal(std::vector<std::string>& input)
{
    int sum = 0;
    
    for (std::string line : input)
    {
        line = std::regex_replace(line, std::regex("one"), "one1one");
        line = std::regex_replace(line, std::regex("two"), "two2two");
        line = std::regex_replace(line, std::regex("three"), "three3three");
        line = std::regex_replace(line, std::regex("four"), "four4four");
        line = std::regex_replace(line, std::regex("five"), "five5five");
        line = std::regex_replace(line, std::regex("six"), "six6six");
        line = std::regex_replace(line, std::regex("seven"), "seven7seven");
        line = std::regex_replace(line, std::regex("eight"), "eight8eight");
        line = std::regex_replace(line, std::regex("nine"), "nine9nine");
        
        char LeftMostNumber = '0';
        char RightMostNumber = '0';

        for (const char i : line)
        {
            int No = i - '0';
            if (No >= 0 && No <= 9)
            {
                LeftMostNumber = i;
                break;
            }
        }

        for (int i = line.length() - 1; i >= 0; i--)
        {
            int No = line[i] - '0';
            if (No >= 0 && No <= 9)
            {
                RightMostNumber = line[i];
                break;
            }
        }

        std::string Composed;
        Composed.push_back(LeftMostNumber);
        Composed.push_back(RightMostNumber);
        sum+=stoi(Composed);
    }

    std::cout << sum;
}