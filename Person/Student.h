#pragma once
#include"Person.h"
#include<iostream>
#include<string>
#include<vector>
class Student: public Person
{
public:
	Student() = default;
	Student(std::string name, std::string surname, int birth_year, SEX sex) :Person(name, surname, birth_year, sex){}
	void push_score(const double score);
	double get_average_score();

	friend std::ostream& operator<<(std::ostream& out, Student& per);


protected:
	std::vector<double>average_scores;
};

