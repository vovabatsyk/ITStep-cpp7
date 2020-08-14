#include<iostream>
#include"Person.h"
#include"Student.h"
#include"Professor.h"
#include"Aspirant.h"
using namespace std;

int main()
{
	Person person("Vova", "Batsyk", 1987, Person::SEX::MALE);
	Student student("Ivan", "Duda", 1990, Person::SEX::MALE);
	student.push_score(12);
	student.push_score(10);
	student.push_score(11);
	student.push_score(10);

	Aspirant aspirant("Anya", "Bill", 1994, Person::SEX::FEMALE,"programmer","C++");
	Professor proffesor("Taras", "Kravetc", 1980, Person::SEX::MALE, Professor::POSITION::DOCENT, 10);
	student.set_sex(Person::SEX::FEMALE);

	cout << person << endl;
	cout << student << endl;
	cout << aspirant << endl;
	cout << proffesor << endl;

	
	return 0;
}