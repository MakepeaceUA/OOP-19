#include <iostream>
#include <string>
using namespace std;

class Passport
{
protected:
    string surname;
    string name;
    string patronymic;
    string sex;
    string birthday;
    string date_expiry;
    string nationality;
    int rec_no;
    int doc_no;

public:
    Passport();
    Passport(string sn,string n,string pat,string s,string b,string de,string nat,int num1,int num2);
    void Output();
};

class ForeignPassport : public Passport
{
    string visas;
    int num_FPassport;

public:
    ForeignPassport();
    ForeignPassport(string sn, string n, string pat, string s, string b, string de, string nat, int num1, int num2,string v,int num);
    void Output();
};

Passport::Passport()
{
    surname = "Surname";
    name = "Name";
    patronymic = "patronymic";
    sex = "_";
    birthday = "00.00.0000";
    date_expiry = "00.00.0000";
    nationality = "_";

    rec_no = 0;
    doc_no = 0;
    
}

Passport::Passport(string sn, string n, string pat, string s, string b, string de, string nat, int num1, int num2)
{
    surname = sn;
    name = n;
    patronymic = pat;
    sex = s;
    birthday = b;
    date_expiry = de;
    nationality = nat;

    rec_no = num1;
    doc_no = num2;
}

void Passport::Output()
{
    cout << "Surnname: " << surname << "\n" << "Name: " << name << "\n" << "Patronymic: " << patronymic << "\n";
    cout << "Sex: " << sex << "\n";
    cout << "Birthday: " << birthday << "\n";
    cout << "Date of expiry: " << date_expiry << "\n";
    cout << "Nationality: " << nationality << "\n";
    cout << "Record No. " << rec_no << "\n";
    cout << "Document No. " << rec_no << "\n";

}

ForeignPassport::ForeignPassport():Passport()
{
    visas = "Visas";
    num_FPassport = 0;
}

ForeignPassport::ForeignPassport(string sn, string n, string pat, string s, string b, string de, string nat, int num1, int num2, string v, int num):Passport(sn,n, pat, s, b, de, nat, num1, num2)
{
    visas = v;
    num_FPassport = num;
}


void ForeignPassport::Output()
{
    Passport::Output();
    cout << visas << "\n" << num_FPassport;
}

int main()
{
    Passport p("Sevastianov", "Arsenii", "Ruslanovich", "Male", "24.02.2007", "01.01.2030", "Ukrainian", 123456, 789012);
    p.Output();

    cout << "\n\n";

    ForeignPassport fp("Sevastianov", "Arsenii", "Ruslanovich", "Male", "24.02.2007", "01.01.2030", "Ukrainian", 123456, 789012, "USA", 123);
    fp.Output();
}


