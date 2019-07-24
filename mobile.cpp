#include "mobile.h"

using namespace std;
int i = 0;

bool Mobile::Validate(std::string number)      {
    bool flag = std::regex_match(number , std::regex("\\+[0-9]{12}"));
    return flag;
}

bool Mobile::Validate(std::string number, std::string code)      {
    bool flag = std::regex_match(number , std::regex("\\+"+code+"[0-9]{12}"));
    return flag;
}

std::string Mobile::Random(bool x){
    std::string Full_number = "+";
    srand(time(0)+(i++));
    if(x==1)        { 
        Full_number += Generate(13);
    }
    else        {
        Full_number += Generate_Invalid(rand()%10);
    }
    return Full_number;
}

std::string Mobile::Random(bool x, std::string code){
    std::string Full_number = "+" + code;
    srand(time(0)+(i++));
    if(x==1)        { 
        Full_number += Generate(11);
    }
    else        {
        Full_number += Generate_Invalid(rand()%10);
    }
    return Full_number;
}

std::string Mobile::Generate(int length)        {
    auto randchar = []() -> char    {
        const char charset[] = "0123456789";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[rand() % max_index];
    };
    std::string str(length-1,0);
    srand(time(0) + i++);
    std::generate_n(str.begin(), length-1, randchar);
    return str;
}

std::string Mobile::Generate_Invalid(int length)        {
    auto randchar = []() -> char    {
        const char charset[] =
        "1234567890";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
    };
    std::string str(length,0);
    srand(time(0)+i++);
    std::generate_n( str.begin(), length, randchar );
    if(Validate(str))
        Generate_Invalid(length);
    return str;
}

