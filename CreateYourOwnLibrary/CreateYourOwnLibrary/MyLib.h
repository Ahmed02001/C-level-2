#pragma once

#include <iostream>
using namespace std;

namespace MyLib {
	void Test() {
		cout << "This Is My First Function In My First Liberary!" << endl;
	}

	int Sum2Numbers(int num1, int num2) {
		return num1 + num2;
	}
}
