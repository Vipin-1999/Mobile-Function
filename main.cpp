#include "telephone.h"

using namespace std;

int main()      {
    Telephone t;
    std::string number;
    for(auto i = 0; i < 10; i++)    {//1 for valid and 0 for invalid
        number = t.Random((i+1)%2, "91", "80");
        cout << number << " : "<< t.Validate(number) << endl;
    }
    return 0;
}

