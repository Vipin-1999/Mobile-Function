#include "mobile.h"

using namespace std;
int i = 0;
           
            bool Mobile::Validate_mNumber(std::string number)      {
                bool flag = std::regex_match(number , std::regex("\\+[0-9]{12}"));
                return flag;
            }

            bool Mobile::Validate_mNumber(std::string number, std::string code)     {
                bool flag = std::regex_match(number , std::regex("\\+"+code+"[0-9]{10}"));
                return flag;
            }

            void Mobile::Add_mNumber(std::string number)       {
                mNumber.push_back(number);
            }

            void Mobile::Add_mNumber(std::string number, std::string code){
                if(code=="specific"){
                    mNumber.push_back(number);
                    specific_mNumber.push_back(number);
                }
                else if(code=="generic"){
                    mNumber.push_back(number);
                    generic_mNumber.push_back(number);
                }
                else       
                    throw invalid_argument("code must be 'generic' or 'specific'!");         
            }

            void Mobile::Remove_mNumber(std::string number)        {
                bool flag=1;
                for(auto j=mNumber.begin();j!=mNumber.end();++j){
                    if(*j==number){
                        flag=0;
                        mNumber.erase(j);
                        break;
                    }
                }
                if(flag)
                    throw invalid_argument("Number does not exist");
            }

            void Mobile::Remove_mNumber(std::string number,std::string code)        {
                bool flag=1;
        
                if(code=="specific")        {
                    for(auto j = specific_mNumber.begin();j!=specific_mNumber.end();++j)        {
                        if(*j==number){
                            flag=0;
                            specific_mNumber.erase(j);
                            break;
                        }
                    }
                    if(flag)
                        throw invalid_argument("Number does not exist");
                    for(auto k=mNumber.begin();k!=mNumber.end();++k)        {
                        if(*k==number)      {
                            flag=0;
                            mNumber.erase(k);
                            break;

                        }
                    }
                }
                else if(code=="generic")       {
                    for(auto j=generic_mNumber.begin();j!=generic_mNumber.end();++j)        {       
                        if(*j==number)      {
                            flag=0;
                            generic_mNumber.erase(j);
                            break;
                        }
                    }
                    if(flag)
                        throw invalid_argument("Number does not exist");
                    for(auto j=mNumber.begin();j!=mNumber.end();++j)        {
                        if(*j==number)      {
                            flag=0;
                            mNumber.erase(j);
                            break;
                        }
                    } 
                }
                else
                    throw invalid_argument("Key must be 'generic' or 'specific'!");
            }

            void Mobile::Show_All_mNumber()      {
                for(auto i=0;i<mNumber.size();i++)
                    cout<<mNumber.at(i)<<endl;
            }

            void Mobile::Show_Generic_mNumber()      {
                for(auto i=0;i<generic_mNumber.size();i++)
                    cout<<generic_mNumber.at(i)<<endl;
            }

            void Mobile::Show_Specific_mNumber()     {
                for(auto i=0;i<specific_mNumber.size();i++)
                    cout<<specific_mNumber.at(i)<<endl;
            }

            std::string Mobile::Random_mNumber(bool x){
                std::string Full_number = "+";
                srand(time(0)+(i++));
                if(x==1)        { 
                        Full_number += Generate_mNumber(14);
                }
                else        {
                        Full_number += Generate_Invalid_mNumber(14);
                }
                Full_number[Full_number.length()-1]='\0'; 
                return Full_number;
            }

            std::string Mobile::Generate_mNumber(int length)        {
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

            std::string Mobile::Generate_Invalid_mNumber(int length)        {
                auto randchar = []() -> char    {
                    const char charset[] =
                    "abcdefghijklmnopqrstuvwxyz1234567890";
                    const size_t max_index = (sizeof(charset) - 1);
                    return charset[ rand() % max_index ];
                };
                std::string str(length,0);
                srand(time(0)+i++);
                std::generate_n( str.begin(), length, randchar );
                if(Validate_mNumber(str))      {
                    Generate_Invalid_mNumber(length);
                }
                return str;
            }