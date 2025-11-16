// Lesson 17 call Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void function4() {
	cout << "I'm a Function 4." << endl;
}
void function3() {
	function4();
}
void function2() {
	function3();
}
void function1() {
	function2();
	function4();
}


int main()
{
	function1();

	return 0;
}
