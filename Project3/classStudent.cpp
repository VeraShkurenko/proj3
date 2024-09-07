#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char* name;
    int year;
    int phonenumber;
    char* city;
    char* country;
    char* uni;
    int groupnum;

public:
    Student() {
        name = nullptr;
        year = 0;
        phonenumber = 0;
        city = nullptr;
        country = nullptr;
        uni = nullptr;
        groupnum = 0;
    }

    Student(const char* Name, int Year, int Phonenumber, const char* City, const char* Country, const char* Uni, int Groupnum) {
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);

        year = Year;
        phonenumber = Phonenumber;

        city = new char[strlen(City) + 1];
        strcpy_s(city, strlen(City) + 1, City);

        country = new char[strlen(Country) + 1];
        strcpy_s(country, strlen(Country) + 1, Country);

        uni = new char[strlen(Uni) + 1];
        strcpy_s(uni, strlen(Uni) + 1, Uni);

        groupnum = Groupnum;
    }

    void setName(const char* NewName) {
        if (name != nullptr) {
            delete[] name;
        }
        name = new char[strlen(NewName) + 1];
        strcpy_s(name, strlen(NewName) + 1, NewName);
    }

    void setYear(int newYear) {
        year = newYear;
    }

    void setPhonenumber(int NewPhonenumber) {
        phonenumber = NewPhonenumber;
    }

    void SetCity(const char* NewCity) {
        if (city != nullptr) {
            delete[] city;
        }
        city = new char[strlen(NewCity) + 1];
        strcpy_s(city, strlen(NewCity) + 1, NewCity);
    }

    void SetCountry(const char* NewCountry) {
        if (country != nullptr) {
            delete[] country;
        }
        country = new char[strlen(NewCountry) + 1];
        strcpy_s(country, strlen(NewCountry) + 1, NewCountry);
    }

    void SetUni(const char* NewUni) {
        if (uni != nullptr) {
            delete[] uni;
        }
        uni = new char[strlen(NewUni) + 1];
        strcpy_s(uni, strlen(NewUni) + 1, NewUni);
    }

    void SetGroupnum(int NewGroupnum) {
        groupnum = NewGroupnum;
    }

    void Input() {
        char buff[100];

        cout << "Enter name -> ";
        cin >> buff;
        if (name != nullptr) {
            delete[] name;
        }
        name = new char[strlen(buff) + 1];
        strcpy_s(name, strlen(buff) + 1, buff);

        cout << "Enter year -> ";
        cin >> year;

        cout << "Enter phonenumber -> ";
        cin >> phonenumber;

        cout << "Enter city -> ";
        cin >> buff;
        if (city != nullptr) {
            delete[] city;
        }
        city = new char[strlen(buff) + 1];
        strcpy_s(city, strlen(buff) + 1, buff);

        cout << "Enter country -> ";
        cin >> buff;
        if (country != nullptr) {
            delete[] country;
        }
        country = new char[strlen(buff) + 1];
        strcpy_s(country, strlen(buff) + 1, buff);

        cout << "Enter uni -> ";
        cin >> buff;
        if (uni != nullptr) {
            delete[] uni;
        }
        uni = new char[strlen(buff) + 1];
        strcpy_s(uni, strlen(buff) + 1, buff);

        cout << "Enter groupnum -> ";
        cin >> groupnum;
    }

    void Output() {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Phonenumber: " << phonenumber << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "Uni: " << uni << endl;
        cout << "Groupnum: " << groupnum << endl;
    }

    ~Student() {
        delete[] name;
        delete[] city;
        delete[] country;
        delete[] uni;
        cout << "Destruct\n";
    }
};

int main() {
    Student st1;
    st1.Input();
    st1.Output();

    Student st2("Vira Shkurenko", 2006, 674738440, "Odesa", "Ukraine", "ItStep", 232);
    st2.Output();

    Student st3;
    st3.setName("Ivan Ivanov");
    st3.setYear(1999);
    st3.setPhonenumber(674838940);
    st3.SetCity("Kyiv");
    st3.SetCountry("Ukraine");
    st3.SetUni("KPI");
    st3.SetGroupnum(101);
    st3.Output();

    system("pause");
    return 0;
}
