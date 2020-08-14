#pragma once
#include"Student.h"
class Aspirant : public Student
{
	std::string topick;
	std::string specialty;
public:

	Aspirant() = default;
	Aspirant(std::string name, std::string surname, int birth_year, SEX sex, std::string specialty, std::string topick)
		:Student(name, surname, birth_year, sex), specialty(specialty), topick(topick) {}

	void set_specialty(const std::string specialty);
	void set_topic(const std::string topick);

	std::string get_specialty() const;
	std::string get_topic()const;

	friend std::ostream& operator<<(std::ostream& out, Aspirant& per);

};

