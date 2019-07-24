#include "mobile.h"

using namespace std;

int main()      {
    Mobile m;
    std::string number;
    for(auto i = 0; i < 10; i++) //1 for valid and 0 for invalid
        number = m.Random_mNumber((i+1)%2);
    cout << m.Validate_mNumber(number) << endl;
    return 0;
}

