#ifndef MOBILE_H
#define MOBILE_H
#include<iostream>
#include<string.h>
#include<stdexcept>
#include<regex>
typedef unsigned long size_t;

// #include "nbind/nbind.h"


class Mobile{
    public:
        bool Validate_mNumber(std::string);
        std::string Random_mNumber(bool);
        std::string Generate_mNumber(int);
        std::string Generate_Invalid_mNumber(int);
};

#endif