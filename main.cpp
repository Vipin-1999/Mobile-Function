#include "mobile.h"

using namespace std;

int main()      {
    Mobile m;
    std::string number;
    // for(auto i = 0; i < 5; i++)    { //1 for valid and 0 for invalid
    //     number = m.Random_mNumber((i+1)%2);
    //     m.Add_mNumber(number);
    // }
    cout << m.Validate_mNumber("+919900112800") << endl;
    m.Add_mNumber("+919900112800");
    m.Add_mNumber("+919900112800");
    m.Add_mNumber("+919900112800");
    m.Add_mNumber("+919900112800");
    m.Add_mNumber("+919900112800");
    m.Add_mNumber("+919900112800");
    cout << m.Validate_mNumber("+9119900112800") << endl;
    m.Show_All_mNumber();
    cout << m.mNumber.size() << endl;
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
    return 0;
}

