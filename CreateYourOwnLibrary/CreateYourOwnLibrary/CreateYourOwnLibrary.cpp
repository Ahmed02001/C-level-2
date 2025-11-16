#include <iostream>
#include "MyLib.h"   //This is my local liberary.
#include "MyInputLib.h"
using namespace std;
using namespace MyLib;
using namespace MyInputLib;

int main()
{
	MyLib::Test();

	cout << MyLib::Sum2Numbers(10, 40) << endl;

	cout << MyInputLib::ReadNumber() << endl;
			    

	return 0;
}