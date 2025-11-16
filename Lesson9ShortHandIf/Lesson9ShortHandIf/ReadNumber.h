#pragma once

#include <iostream>
using namespace std;
namespace MyLib {

	enum enCheckNumber { Zero = 0, Positive = 1, negative = 2 };;
	int ReadNumber() {
		int number;
		cout << "Please Enter A Number?" << endl;
		cin >> number;
		return number;
	}

	enCheckNumber CheckNumber(int number) {
		return (number == 0) ? enCheckNumber::Zero : (number > 0) ? enCheckNumber::Positive : enCheckNumber::negative;
	}
}
