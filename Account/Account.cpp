#include "Account.h"

Account::Account(int account_number, std::string customer_name, double balance)
{
	this->account_number = account_number;
	this->customer_name = customer_name;
	this->balance = balance;

}

double Account::balance_check() const
{
	return balance;
}

void Account::transfer(const double score, Account& other)
{
	if (balance - score < 0)
	{
		throw std::exception("����������� ����� ��� �����������");
	}
	other.balance += score;
	cash_withdrawal(score);
}

void Account::replenishment_account(const double score)
{
	balance += score;
}

void Account::cash_withdrawal(const double score)
{
	if (balance - score < 0)
		throw std::exception("����������� ����� ��� ������");
	balance -= score;
}

int SecureAccount::check_pin_code(const int pin_code) const
{
	if (this->pin_code != pin_code)
		throw std::exception("�� ���������� �� ���");
	return pin_code;
}

int SecureAccount::set_pin_code(const int pin_code)
{
	return this->pin_code = pin_code;
}

void SecureAccount::accaunt_info()const
{
	std::cout << "����� �������: " << account_number << "\t" << "��� ��������: " << customer_name << "\t" << "������: " << balance << std::endl;
}

void SecureCreditAccount::accaunt_info() const
{
	std::cout << "����� �������: " << account_number << "\t��� ��������: " << customer_name << "\t������: " << balance << "\t��������� ���: " << max_credit << std::endl;

}
