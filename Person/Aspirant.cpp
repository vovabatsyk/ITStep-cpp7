#include "Aspirant.h"

void Aspirant::set_specialty(const std::string specialty)
{
	this->specialty = specialty;
}

void Aspirant::set_topic(const std::string topick)
{
	this->topick = topick;
}

std::string Aspirant::get_specialty() const
{
	return specialty;
}

std::string Aspirant::get_topic() const
{
	return topick;
}

std::ostream& operator<<(std::ostream& out, Aspirant& per)
{
	out << "\tAspirant" << std::endl
		<< "Name: " << per.get_name() << std::endl
		<< "Surname: " << per.get_surname() << std::endl
		<< "Year of birthday: " << per.get_birth_year() << std::endl
		<< "Sex: " << per.get_sex() << std::endl
		<< "Average score: " << per.get_average_score() << std::endl
		<< "Specialty: " << per.get_specialty() << std::endl
		<< "Topic: " << per.get_topic() << std::endl;
	return out;
}
