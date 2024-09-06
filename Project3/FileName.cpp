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

	Car(const char * Model, const char* Country, double Price, int Year)
	{
		model = new char[strlen(Model) + 1];
		country = new char[strlen(Country) + 1];
		price = Price;
		year = Year;

	}

	void SetModel(const char * NewModel)
	{
		if (model != nullptr)
		{
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

	void SetPrice(int NewYear)
	{
		price = NewYear;
	}


	void Input(const char* Model, const char* Country, double Price, int Year)
	{
		char buff[20];
		cout << "Enter model -> ";
		cin >> buff;

		if (model != nullptr)
		{
			delete[] model;

		}
		model = new char[strlen(buff) + 1];
		strcpy_s(model, strlen(buff) + 1, buff);



		cout << "Enter country -> ";

		if (country != nullptr)
		{
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


};


int main()
{
	
}