#include <iostream>
using namespace std;


int ReadNumber() {
    int number;
    cout << "please enter the number?\n";
    cin >> number;

    while (cin.fail()) {

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid number, Enter a validnone." << endl;
        cin >> number;
    }
    return number;
}

int main()
{
    cout << "Your Number Is : " << ReadNumber();




   /* for (int n : {1, 2, 3, 4, 5, 6, 7, 8, 9}) {
        cout << n << endl;
    }*/

    /*int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for(int n : arr) {
        cout << n << endl;
    }*/


    // valide number

     
}