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
        bool Validate(std::string);
        bool Validate(std::string, std::string);
        std::string Random(bool);
        std::string Random(bool, std::string);
        std::string Generate(int);
        std::string Generate_Invalid(int);
};

#endif