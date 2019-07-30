#ifndef MOBILE_H
#define MOBILE_H
#include<iostream>
#include<string.h>
#include<stdexcept>
#include<regex>
typedef unsigned long size_t;

#include "nbind/nbind.h"

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

NBIND_CLASS(Mobile){
    construct<>();
    multimethod(Validate, args(std::string), "Validate");
    multimethod(Validate, args(std::string, std::string), "ValidateWithCode");
    multimethod(Random, args(bool), "Random");
    multimethod(Random, args(bool, std::string), "RandomWithCode");
    method(Generate);
    method(Generate_Invalid);
}