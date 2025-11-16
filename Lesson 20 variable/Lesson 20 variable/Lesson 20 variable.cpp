#include <iostream>
using namespace std;

void Myfunc() {
    static int number = 1;
    cout << "Value Of number : " << number << endl;
    number++;
}
int main()
{
    Myfunc();
    Myfunc();
    Myfunc();

    //auto variable'
    auto x = 10;
    auto y = 12.6;
    auto z = "ahmed ahdm hhdhfhb";

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}