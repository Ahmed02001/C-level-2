#include <iostream>
using namespace std;


int main()
{

	int* ptrX;
	
	float* ptrY;

	//Dynamic memory allocate
	ptrX = new int;
	ptrY = new float;

	*ptrX = 50;
	*ptrY = 50.684;

	cout << *ptrX << endl;
	cout << *ptrY << endl;

	delete ptrX;
	delete ptrY;


	return 0;
}
