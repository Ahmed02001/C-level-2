#include <iostream>
using namespace std;

void PrintNumbers(int n, int m) {

    if (n <= m) {
        cout << n << endl;
        PrintNumbers(n + 1, m);
    }
}

//homework
void PrintDecNumber(int n, int m) {
    
    if (n >= m) {
        cout << n << endl;
        PrintDecNumber(n - 1, m);
    }
}

//homework

int PrintNpowM(int n, int m) {
    
    if (m == 0)
        return 1;
    else
        return (n * PrintNpowM(n, m - 1));
}

int main()
{
    //PrintNumbers(1, 10);

    //PrintDecNumber(10, 1);

    cout << PrintNpowM(3, 2) << endl;

    return 0;

}