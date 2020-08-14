#pragma once
#include <iostream>
#include <string>
using namespace std;

class Passport
{
protected:
    string name;
    string patronymic;
    string surname;
    string city_birth;
    int birth_year;
    string issued_by;
    int year_issue;
    string series;
    int number;

public:
    Passport();
    Passport(string Name, string Patronymic, string Surname, string City_birth, string Issued_by, string series, int number);
    ~Passport();

    string getName()const;
    string getSurname()const;
    string getPatronymic()const;
    string getCity_birth()const;
    string getIssued_by()const;
    string getseries()const;
    int getnumber()const;

    friend ostream& operator<<(ostream& out, Passport& obj);
};