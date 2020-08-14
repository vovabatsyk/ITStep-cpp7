#pragma once
#include<iostream>
#include<string>


class Person
{

public:
	enum SEX
	{
		MALE,
		FEMALE
	};
	Person() = default;
	Person(std::string name, std::string surname, int birth_year, SEX sex);

	std::string get_name()const ;
	std::string get_surname() const;
	int get_birth_year() const;
	void set_name(const std::string name);
	void set_surname(const std::string surname);
	void set_birth_year(const int birth_year);
	std::string get_sex();
	void set_sex(const SEX sex);

	friend std::ostream& operator<<(std::ostream& out, Person& per);


protected:
	std::string name;
	std::string surname;
	int birth_year;
	SEX sex;

	SEX return_sex();
};

