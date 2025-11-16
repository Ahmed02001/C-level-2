#include <iostream>
using namespace std;

int AddSum(int a, int b) {
    return a + b;
}
int AddSum(int a, int b, int c) {
    return a + b + c;
}
int AddSum(int a, int b, int c, int d) {
    return a + b + c + d;
}
int AddSum(int a, int b, int c, int d, int f) {
    return a + b + c + d + f;
}


int main()
{
    cout << AddSum(10, 20) << endl;
    cout << AddSum(10, 20, 30) << endl;
    cout << AddSum(10, 20, 30, 40) << endl;
    cout << AddSum(10, 20, 30, 40, 50) << endl;


    return 0;

}

