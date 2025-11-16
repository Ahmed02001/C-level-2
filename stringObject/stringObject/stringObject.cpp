#include <iostream>
#include<string>
using namespace std;

int main()
{
    string S1;
    S1 = "I'm Ahmed Hamdy, I love Programming.";

    cout << S1 << endl;

    cout << S1.length() << endl;

    S1.append("advaice Programming.");
    cout << S1 << endl;

    cout << S1.at(6) << endl;

    S1.insert(1, "ahemd hamdi");
    cout << S1 << endl;

    S1.push_back('N');
    cout << S1 << endl;
    S1.clear();
    cout << S1 << endl;

    

    
}