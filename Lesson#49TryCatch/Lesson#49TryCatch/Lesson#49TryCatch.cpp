#include <iostream>
#include<vector>
using namespace std;


int main()
{
	vector <int>num = { 4, 5, 6,3 };

	try {
		cout << num.at(5);
	}
	catch(...){
		cout << "sorry handel" << endl;
	};
}