#include "Professor.h"

void Professor::set_position(const POSITION position)
{
    this->position = position;
}

std::string Professor::get_position()
{
	std::string _pos = "teacher";

	switch (return_position())
	{
	case POSITION::TEACHER:
		_pos = "teacher";
		break;
	case POSITION::SENIOR_TEACHER:
		_pos = "senior teacher";
		break;
	case POSITION::DOCENT:
		_pos = "docent";
		break;
	case POSITION::PROFESSOR:
		_pos = "professor";
		break;
	default:
		break;
	}
	return _pos;
}

void Professor::set_number_of_publications(const int number_of_publications)
{
	this->number_of_publications = number_of_publications;
}

int Professor::get_number_of_publications() const
{
	return number_of_publications;
}

Professor::POSITION Professor::return_position()
{
    return position;
}

std::ostream& operator<<(std::ostream& out, Professor& per)
{
	out << "\tProfessor" << std::endl
		<< "Name: " << per.get_name() << std::endl
		<< "Surname: " << per.get_surname() << std::endl
		<< "Year of birthday: " << per.get_birth_year() << std::endl
		<< "Sex: " << per.get_sex() << std::endl
		<< "Position: " << per.get_position() << std::endl
		<< "Number of publication: " << per.get_number_of_publications() << std::endl;
	return out;
}
