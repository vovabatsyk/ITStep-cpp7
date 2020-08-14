#include "ForeignPassport.h"

ForeignPassport::ForeignPassport()
{
    citizenship = "Україна";
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
    out << " \tЗакордонний паспорт" << endl
        << " Фамілія: " << obj.getSurname() << endl
        << " Імя: " << obj.name << endl
        << " По батькові: " << obj.patronymic << endl
        << " Громадянство: " << obj.citizenship << endl
        << " Рік народження: " << obj.birth_year << endl
        << " Термін дії: " << obj.validity << endl
        << " Кількісь віз: " << obj.numberVisas << endl;

    return out;

}