#include<iostream>
#include"Account.h"
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	try {

		SecureAccount user1(3478, "Микола", 25000);
		user1.accaunt_info();

		SecureAccount user2(3438, "Тарас", 21000);
		user2.accaunt_info();

		SecureCreditAccount user3(3234, "Іван", 15000);
		user3.accaunt_info();

		cout << endl << "Микола зняв 20000" << endl;
		user1.cash_withdrawal(20000);
		user1.accaunt_info();

		cout << endl << "Іван перевів Миколі 12000" << endl;
		user3.transfer(12000, user1);
		user1.accaunt_info();
		user3.accaunt_info();

		cout << endl << "Іван хоче зняти 5000" << endl;
		user3.cash_withdrawal(5000);
	}
	catch (const std::exception& ex) {
		cerr << ex.what();
	}

	return 0;
}