#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
{
    citizenship = "������";
    validity = 2022;
    numberVisas = 2;
}

ForeignPassport::ForeignPassport(string Name, string Patronymic, string Surname, string City_birth, string Issued_by, string series, int number, string citizenship)
    : Passport(Name, Patronymic, Surname, City_birth, Issued_by, series, number)
{
    this->citizenship = citizenship;
}

ForeignPassport::~ForeignPassport() {}

ostream& operator<<(ostream& out, ForeignPassport& obj)
{
    out << " \t����������� �������" << endl
        << " �����: " << obj.getSurname() << endl
        << " ���: " << obj.name << endl
        << " �� �������: " << obj.patronymic << endl
        << " ������������: " << obj.citizenship << endl
        << " г� ����������: " << obj.birth_year << endl
        << " ����� 䳿: " << obj.validity << endl
        << " ʳ����� ��: " << obj.numberVisas << endl;

    return out;

}