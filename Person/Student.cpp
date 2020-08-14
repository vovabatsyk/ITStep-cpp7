#include "Student.h"

void Student::push_score(const double score)
{
	average_scores.push_back(score);
}

double Student::get_average_score()
{
	double score = 0;
	if (!average_scores.size())
	{
		return 0;
	}
	for (double item : average_scores)
		score += item;

	return score / average_scores.size();
}

std::ostream& operator<<(std::ostream& out, Student& per)
{
	out << "\tStudent" << std::endl
		<< "Name: " << per.get_name() << std::endl
		<< "Surname: " << per.get_surname() << std::endl
		<< "Year of birthday: " << per.get_birth_year() << std::endl
		<< "Sex: " << per.get_sex() << std::endl
		<< "Average score: " << per.get_average_score() << std::endl;
	return out;
}
