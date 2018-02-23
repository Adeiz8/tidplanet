#include <iostream>
#include <string>
#include <cmath>
#include <windows.h> 

using namespace std;
const double G = 6.674*pow(10, -11);
const double Pi = 3.14159265358979;
string planet;
double getDensitet(string fråga)
{
	double num;
	
	do
	{
		cout << fråga << endl;
		cin >> planet;
	} while (planet != "jorden" && planet != "mars");
	if (planet == "jorden")
	{
		num = 5510;
	}
	else if (planet == "mars")
	{
		num = 3930;
	}
	return num;
}
double time(double p)
{
	double a = (4 * G*Pi*p) / 3.0;
	return Pi * sqrt((1/a));
}

int main()
{
	double densitet = getDensitet("Ange vilken planet du vill veta genomfallningstid för, jorden eller mars!");
	double tid = time(densitet);
	int minut = tid / 60;
	cout << "Det tar " << tid << "sekunder alternativt ungefär " << minut << " minuter att falla genom " << planet << "." << endl;
	Sleep(15000);
}