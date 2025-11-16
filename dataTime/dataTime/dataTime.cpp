#pragma warning(disable : 4996)
#include <iostream>
#include<ctime>
#include<cctype>
using namespace std;

int main()
{
	/*time_t t = time(0);
	char* dt = ctime(&t);
	cout << dt << endl;

	tm* gmtm = gmtime(&t);
	dt = asctime(gmtm);
	cout << dt << endl;*/


	time_t t = time(0);
	tm* now = localtime(&t);
	cout << now->tm_year << endl;
	cout << now->tm_mon << endl;
	cout << now->tm_hour << endl;
	cout << now->tm_wday << endl;
	cout << now->tm_hour << endl;
	cout << now->tm_min << endl;
	cout << now->tm_sec << endl;
	cout << now->tm_isdst << endl;
	cout << now->tm_yday << endl;

	


}