#include <iostream>
using namespace std;

int main()
{
    int a = 20;

    cout << a << endl; //print 20
    cout << &a << endl; //print address

    int* p;
    p = &a;

    cout << p << endl;  //print address a
    cout << *p << endl; //print a

    *p = 40;

    cout << a << endl;  //print 40
    cout << *p << endl; //print 40

    a = 60;
    
    cout << a << endl;  //print 60
    cout << *p << endl; //ptiny 60
}
