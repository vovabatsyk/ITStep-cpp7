#pragma once
#include<iostream>
#include<string>
#include<exception>


class Account
{
protected:
	int account_number = 0;
	std::string customer_name = "";
	double balance = 0;

public:
	Account() = default;
	Account(int account_number, std::string customer_name, double balance);

	double balance_check()const;
	virtual void accaunt_info()const = 0;
	virtual void transfer(const double score, Account& other);
	void replenishment_account(const double score);
	virtual void cash_withdrawal(const double score);
};

class SecureAccount : public Account
{
protected:
	int pin_code = 0;
public:
	int check_pin_code(const int pin_code)const;
	int set_pin_code(const int pin_code);
	SecureAccount() = default;
	SecureAccount(int account_number, std::string customer_name, double balance) :Account(account_number, customer_name, balance) {}
	virtual void accaunt_info()const override;
};

class SecureCreditAccount : public SecureAccount
{
private:
	double max_credit = 0;

public:
	SecureCreditAccount(int account_number, std::string customer_name, double max_credit) :max_credit(max_credit) {
		this->account_number = account_number;
		this->customer_name = customer_name;
		this->balance = max_credit;
	};

	virtual void accaunt_info()const override;
};

