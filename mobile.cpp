#include "mobile.h"

using namespace std;
           
            bool Mobile::Validate_mNumber(std::string number)      {
                bool flag = std::regex_match(number , std::regex("\\+[0-9]{12}"));
                return flag;
            }

            bool Mobile::Validate_mNumber(std::string number, std::string code)     {
                bool flag = std::regex_match(number , std::regex("\\+"+code+"[0-9]{10}"));
                return flag;
            }

            void Add_mNumber(std::string)       {

            }

            /*void Add_mNumber(std::string,std::string)       {

            }

            void Remove_mNumber(std::string)        {

            }

            void Remove_mNumber(std::string,std::string)        {

            }

            void Show_All_mNumber()     {

            }

            void Show_Generic_mNumber()     {

            }

            void Show_Specific_mNumber()        {

            }

            std::string Random_mNumber(int,int,int,bool)        {

            }

            std::string Generate_mNumber(size_t)        {

            }

            std::string Generate_Invalid_mNumber(size_t)        {

            }
*/