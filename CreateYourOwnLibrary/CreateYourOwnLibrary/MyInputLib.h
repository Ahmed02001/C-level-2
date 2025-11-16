#pragma once

#include <iostream>
using namespace std;

namespace MyInputLib{



	int ReadNumber() {
		int number = 0;
		cout << "Please Enter the number: ";
		cin >> number;
		return number;
	}
	
}
