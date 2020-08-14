#include<iostream>
#include"Passport.h"
#include"ForeignPassport.h"
#include<Windows.h>

using namespace std;

int main()
{

	SetConsoleOutputCP(1251);
	Passport vova;
	cout << vova << endl;
	ForeignPassport pasp;
	cout << pasp << endl;
	
	return 0;
}