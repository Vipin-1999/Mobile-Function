#include "mobile.h"

using namespace std;

int main()      {
    Mobile m;
    std::string number;
    std::string key;
    for(auto i = 0; i < 5; i++)    { //1 for valid and 0 for invalid
        number = m.Random_mNumber((i+1)%2);
        if(i % 2 == 0)
            key = "specific";
        else 
            key = "generic";
        m.Add_mNumber(number, key);
    }
    cout << "All Numbers" << endl;
    m.Show_All_mNumber();
    cout << "Generic" << endl;
    m.Show_Generic_mNumber();
    cout << "Specific" << endl;
    m.Show_Specific_mNumber();
    int choice, n;
    cout << "Enter the number of numbers to be deleted : ";
    cin >> choice;
    cout << endl << "Enter your choice (specific or generic)";
    cin >> key;
    cout << endl;
    if(key == "generic")
        n = 1;
    else
        n = 0;
    if(choice > 1)
        for (auto i = 0; i < choice; i++)
            m.Remove_mNumber(m.mNumber.at(i), key);
    else
        m.Remove_mNumber(m.mNumber.at(n-1));
    m.Show_All_mNumber();
    return 0;
}

