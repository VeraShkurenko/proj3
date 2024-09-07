#include <iostream>
#include <cstring>
using namespace std;

class Car 
{
    char* model;
    char* country;
    double price;
    int year;

public:
    Car() 
    {
        model = nullptr;
        country = nullptr;
        price = 0;
        year = 2024;
    }

    Car(const char* Model, const char* Country, double Price, int Year) 
    {
        model = new char[strlen(Model) + 1];
        strcpy_s(model, strlen(Model) + 1, Model);

        country = new char[strlen(Country) + 1];
        strcpy_s(country, strlen(Country) + 1, Country);

        price = Price;
        year = Year;
    }

    void SetModel(const char* NewModel) 
    {
        if (model != nullptr) {
            delete[] model;
        }
        model = new char[strlen(NewModel) + 1];
        strcpy_s(model, strlen(NewModel) + 1, NewModel);
    }

    void SetCountry(const char* NewCountry) 
    {
        if (country != nullptr) 
        {
            delete[] country;
        }
        country = new char[strlen(NewCountry) + 1];
        strcpy_s(country, strlen(NewCountry) + 1, NewCountry);
    }

    void SetPrice(double NewPrice) 
    {
        price = NewPrice;
    }

    void SetYear(int NewYear) 
    {
        year = NewYear;
    }

    void Input() 
    {
        char buff[100];

        cout << "Enter model -> ";
        cin >> buff;
        if (model != nullptr) 
        {
            delete[] model;
        }
        model = new char[strlen(buff) + 1];
        strcpy_s(model, strlen(buff) + 1, buff);

        cout << "Enter country -> ";
        cin >> buff;
        if (country != nullptr) {
            delete[] country;
        }
        country = new char[strlen(buff) + 1];
        strcpy_s(country, strlen(buff) + 1, buff);

        cout << "Enter price -> ";
        cin >> price;

        cout << "Enter year -> ";
        cin >> year;
    }

    void Output()
    {
        cout << "Model: " << model << endl;
        cout << "Country: " << country << endl;
        cout << "Price: " << price << endl;
        cout << "Year: " << year << endl;
    }

    ~Car() 
    {
        delete[] model;
        delete[] country;
        cout << "Destruct\n";
    }
};

int main()
{
    Car car1;
    car1.Input();
    car1.Output();

    Car car2("Tesla", "USA", 50000, 2023);
    car2.Output();

    Car car3;
    car3.SetModel("BMW");
    car3.SetCountry("Germany");
    car3.SetPrice(45000);
    car3.SetYear(2022);
    car3.Output();

    system("pause");
    return 0;
}
