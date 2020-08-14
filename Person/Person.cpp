#include "Person.h"

Person::Person(std::string name, std::string surname, int birth_year, SEX sex) {
	this->name = name;
	this->surname = surname;
	this->birth_year = birth_year;
	this->sex = sex;
}

std::string Person::get_name() const
{
	return name;
}

std::string Person::get_surname() const
{
	return surname;
}

int Person::get_birth_year() const
{
	return birth_year;
}

void Person::set_name(const std::string name)
{
	this->name = name;
}

void Person::set_surname(const std::string surname)
{
	this->surname = surname;
}

void Person::set_birth_year(const int birth_year)
{
	this->birth_year = birth_year;
}

std::string Person::get_sex() 
{
	std::string _sex = "male";

	switch (return_sex())
	{
	case SEX::MALE:
		_sex = "male";
		break;
	case SEX::FEMALE:
		_sex = "female";
		break;
	default:
		break;
	}
	return _sex;
}

void Person::set_sex(const SEX sex) {
	this->sex = sex;
}

Person::SEX Person::return_sex() {
	return sex;
}

std::ostream& operator<<(std::ostream& out, Person& per)
{
	out << "\tPerson" << std::endl
		<< "Name: " << per.get_name() << std::endl
		<< "Surname: " << per.get_surname() << std::endl
		<< "Year of birthday: " << per.get_birth_year() << std::endl
		<< "Sex: " << per.get_sex() << std::endl;
	return out;
}
