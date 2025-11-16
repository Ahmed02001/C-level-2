#include <iostream>
#include "ReadNumber.h"
using namespace std;
using namespace MyLib;


int main()
{
    int number;
    number = ReadNumber();
    string Result;
    Result = (CheckNumber(number) == 0) ? "Zero" : (CheckNumber(number) == 1) ? "positive" : "Negative";
    cout << Result << endl;


    return 0;
}