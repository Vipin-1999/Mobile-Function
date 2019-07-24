#ifndef MOBILE_H
#define MOBILE_H
#include<iostream>
#include<string.h>
#include<stdexcept>
#include<regex>
typedef unsigned long size_t;
typedef std::vector<std::string> mvector;

// #include "nbind/nbind.h"


class Mobile{
    public:
        bool Validate_mNumber(std::string);
        void Add_mNumber(std::string);
        void Remove_mNumber();
        void Show_All_mNumber();
        std::string Random_mNumber(bool);
        std::string Generate_mNumber(size_t);
        std::string Generate_Invalid_mNumber(size_t);
        mvector mNumber;
};

#endif