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
            bool Validate_mNumber(std::string, std::string);
            void Add_mNumber(std::string);
            void Add_mNumber(std::string,std::string);
            void Remove_mNumber(std::string);
            void Remove_mNumber(std::string,std::string);
            void Show_All_mNumber();
            void Show_Generic_mNumber();
            void Show_Specific_mNumber();
            std::string Random_mNumber(int,int,int,bool);
            std::string Generate_mNumber(size_t);
            std::string Generate_Invalid_mNumber(size_t);
            mvector domains,generic_mNumber,specific_mNumber;

};

#endif