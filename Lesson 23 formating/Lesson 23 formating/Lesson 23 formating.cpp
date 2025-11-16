#include <iostream>
#include<iomanip>
using namespace std;

void FormatingIntNumbers() {
    int page = 2, totalpage = 10;

    printf("The number is %d\n", page);
    printf("The number from %d to %d\n", page, totalpage);

    printf("The number is %0*d\n", 2, page);
    printf("the number is %0*d\n", 3, page);
    printf("the number is %0*d\n", 4, page);
    printf("the number is %0*d\n", 5, page);

    int num1 = 5, num2 = 10;
    printf("the Result is %d + %d = %d\n", num1, num2, num1 + num2);

}

void FormatingFloatNumber() {
    float PI = 3.14625;
    printf("the number is %.*f\n", 2, PI);
    printf("the number is %.*f\n", 5, PI);

    float x = 7.0, y = 9.0;
    printf("the Diestion is %.3f / %.3f = %.3f\n", x, y, x / y);



}

void Printstringformat() {
    char name[] = "ahjmed hamfhauifhu";

    printf("Dear %s, how are you",name);
}

int main()
{
    /*FormatingIntNumbers();

    FormatingFloatNumber();*/

    //Printstringformat();

    cout << "----------|------------------------------|----------|\n";
    cout << "   CODE   |             NAME             |   MARK   |\n";
    cout << "----------|------------------------------|----------|\n";
    cout << setw(10) << "ico55" << setw(30) << "Advanced Programming" << setw(10) << "90" << endl;
    cout << setw(10) << "wrf55" << setw(30) << "Advanced Python Programming" << setw(10) << "95" << endl;
    cout << setw(10) << "ico55" << setw(30) << "Advanced Programming" << setw(10) << "90" << endl;
    cout << "----------|------------------------------|----------|\n";
    return 0;
}