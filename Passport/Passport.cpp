#include "Passport.h"

Passport::Passport()
{
    surname = "Бацик";
    name = "Володимир";
    patronymic = "Васильович";
    city_birth = "Львів";
    issued_by = "Личаківським РВ МВС України";
    series = "ЕО-32434234";
    number = 240942;
    birth_year = 1987;
    year_issue = 2005;
}

Passport::Passport(string Name, string Patronymic, string Surname, string City_birth, string Issued_by, string series, int number)
{
    this->name = Name;
    this->patronymic = Patronymic;
    this->surname = Surname;
    this->city_birth = City_birth;
    this->issued_by = Issued_by;
    this->series = series;
    this->number = number;
}

Passport::~Passport() {}

string Passport::getName()const
{
    return name;
}

string Passport::getSurname()const
{
    return surname;
}

string Passport::getPatronymic()const
{
    return patronymic;
}

string Passport::getCity_birth()const
{
    return city_birth;
}

string Passport::getIssued_by()const
{
    return issued_by;
}

string Passport::getseries()const
{
    return series;
}

int Passport::getnumber()const
{
    return number;
}

ostream& operator<<(ostream& out, Passport& obj)
{
    out << " \tВнутрішній паспорт" << endl
        << " Фамілія: " << obj.getSurname() << endl
        << " Імя: " << obj.name << endl
        << " По батькові: " << obj.patronymic << endl
        << " Місто: " << obj.city_birth << endl
        << " Рік народження: " << obj.birth_year << endl
        << " Ким видано: " << obj.issued_by << endl
        << " Рік видачі: " << obj.year_issue << endl
        << " Серія: " << obj.series << endl
        << " Номер: " << obj.number << endl;
    return out;

}