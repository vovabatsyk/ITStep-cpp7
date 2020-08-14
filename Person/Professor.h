#pragma once
#include"Person.h"
class Professor : public Person
{

public:
	Professor() = default;
	enum POSITION
	{
		TEACHER,
		SENIOR_TEACHER,
		DOCENT,
		PROFESSOR
	};

	Professor(std::string name, std::string surname, int birth_year, SEX sex, POSITION position, int number_of_publications)
		:Person(name, surname, birth_year, sex), position(position), number_of_publications(number_of_publications) {}
	
	void set_position(const POSITION position);
	std::string get_position();
	
	void set_number_of_publications(const int number_of_publications);
	int get_number_of_publications()const;

	friend std::ostream& operator<<(std::ostream& out, Professor& per);


private:
	int number_of_publications;
	POSITION position;
	POSITION return_position();
};

