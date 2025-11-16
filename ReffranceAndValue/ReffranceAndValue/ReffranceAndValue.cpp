#include <iostream>
using namespace std;

void Function(int &x) {
    x++;
}

int main()
{
    int a = 10;
    Function(a);
    cout << "call by Ref : " << &a << endl;

    int x = 10;
    int& y = x;

    cout << &x << endl;
    cout << &y << endl;
    y = 20;

    cout << x << endl;
    cout << y << endl;

}