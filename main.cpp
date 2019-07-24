#include "mobile.h"

using namespace std;

int main()      {
    Mobile m;
    std::string number;
    for(auto i = 0; i < 10; i++)    { //1 for valid and 0 for invalid
        number = m.Random_mNumber((i+1)%2);
        m.Add_mNumber(number);
    }
    m.Show_All_mNumber();
    int choice;
    cout << "Enter the number of numbers to be deleted : ";
    cin >> choice;
    cout << endl;
    if(choice > 1)
        for (auto i = 0; i < choice; i++)
            m.Remove_mNumber();
    else
        m.Remove_mNumber();
    m.Show_All_mNumber();
    // cout<<m.Validate_mNumber("+916362764968")<<endl;
    return 0;
}

