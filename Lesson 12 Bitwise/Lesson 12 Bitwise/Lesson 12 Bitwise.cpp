#include <iostream>
using namespace std;


//declaration
//int AddSum(int, int, int, int);
int AddSum(int a, int b, int c=0, int d=0) {
    return a + b + c + d;
}
int main()
{
    cout << AddSum(10, 20) << endl;

    //cout << (12 & 25) << endl;
    //cout << (12 | 25) << endl;
}

// definition
