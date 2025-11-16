#include <vector>
#include <iostream>
using namespace std;
struct stEmployee {
    string FirstName;
    string LastName;
    float Salary = 0;
};

void ReadVector( vector<stEmployee>& vStructure)
{
    stEmployee Employees;
    char ReadMore = 'Y';
    do {
        cout << "Please Enter The First Name?\n";
        cin >> Employees.FirstName;
        cout << "Please Enter The Last Name?\n";
        cin >> Employees.LastName;
        cout << "Please Enter The Salary?\n";
        cin >> Employees.Salary;
        vStructure.push_back(Employees);
        cout << "Do You Want Again This Process?Y/N";
        cin >> ReadMore;
    } while (ReadMore == 'y' || ReadMore == 'Y');


}
void PrintVectorEmployees( vector<stEmployee>& vStructure) {
    
    for (stEmployee Employees : vStructure) {
        cout << "\nFirstName: " << Employees.FirstName << endl;
        cout << "Last Name: " << Employees.LastName << endl;
        cout << "Salary: " << Employees.Salary << endl;
        cout << endl;
    }
}

int main()
{
    /*vector<stEmployee>vStructure;
    ReadVector(vStructure);
    PrintVectorEmployees( vStructure);*/


    vector<int >vNumbers;
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    cout << "vector size = " << vNumbers.size() << endl;
    cout << "first item " << vNumbers.front() << endl;
    cout << "last item " << vNumbers.back() << endl;
    vNumbers.clear();

    /*vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    cout << "vector size = " << vNumbers.size() << endl;

    if (vNumbers.size() > 0) {
        vNumbers.pop_back();
    }*/

   /* if (!vNumbers.empty()) {

        vNumbers.pop_back();
    }*/

    for (int& number : vNumbers) {
        cout << number << "  ";
    }
    cout << endl;









    /*tempEmployee.FirstName = "Ahmed";
    tempEmployee.LastName = "Hamdy";
    tempEmployee.Salary = 6999;
    vStructure.push_back(tempEmployee);

    tempEmployee.FirstName = "Mohammed";
    tempEmployee.LastName = "Reda";
    tempEmployee.Salary = 5999;
    vStructure.push_back(tempEmployee);

    tempEmployee.FirstName = "Ali";
    tempEmployee.LastName = "Ibrahem";
    tempEmployee.Salary = 4999;
    vStructure.push_back(tempEmployee);

    cout << "Employee Vector> " << endl;
    for (stEmployee &Employee : vStructure) {
        cout << "\nFirst Name: " << Employee.FirstName << endl;
        cout << "Last Name: " << Employee.LastName << endl;
        cout << "Salary: " << Employee.Salary << endl;
    }*/

    return 0;
}