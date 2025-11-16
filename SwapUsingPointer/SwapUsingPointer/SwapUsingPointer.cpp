#include <iostream>

#include<string>
#include <vector>
using namespace std;
void Swap(int* N1, int* N2 ){
    int temp = *N1;
    *N1 = *N2;
    *N2 = temp;
}

struct stEmployee {
    string name;
    float salary;
};

int main()
{
    /*int a = 1, b = 2;

    cout << "Before Swapping \n";
    cout << " a : " << a << endl;
    cout << " b : " << b << endl;

    Swap(&a, &b);

    cout << "After Swapping \n";
    cout << " a : " << a << endl;
    cout << " b : " << b << endl;*/

     //pointers in array
    /*int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    cout << ptr << endl;
    cout << ptr + 1 << endl;
    cout << ptr + 2 << endl;
    cout << ptr + 3 << endl;
    cout << ptr + 4 << endl;


    cout << *(ptr) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + 4) << endl;*/

    //pointers in structure

    /*stEmployee employee, * ptr;

    employee.name = "Ahmed Hamdy.";
    employee.salary = 5000;

    cout << employee.name << endl;
    cout << employee.salary << endl;

    ptr = &employee;
    cout << "using pointer." << endl;

    cout << ptr->name << endl;
    cout << ptr->salary << endl;*/

    //pointer in void

    void* ptr;
    int x = 50;

    float f1 = 10.5;

    ptr = &f1;
    cout << ptr << endl;

    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = &x;
    cout << ptr << endl;

    cout << *(static_cast<int*>(ptr)) << endl;


    int year = 2000;
    int save = 0;
    float a = 0.0f;
    save = year / 100;
    a = year - (save * 100);
    if (a > 0)
        save = save + 1;
    cout << save << endl;


}
