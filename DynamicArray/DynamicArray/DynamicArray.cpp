#include <iostream>
using namespace std;


int main()
{
    int num;
    cout << "please enter How many students you want?\n";
    cin >> num;

    float* ptr;
    ptr = new float[num];

    for (int i = 0; i < num; i++) {
        cout << "student " << i + 1 << endl;
        cin >> *(ptr + i);
    }
    cout << "\nDesplaying the student mark.\n";
    for (int i = 0; i < num; i++) {
        cout << *(ptr + i) << endl;

    }

    delete[] ptr;
}