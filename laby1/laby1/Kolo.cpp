#include "Kolo.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

Kolo::Kolo(double r) : r(r)
{
	cout << "Konstruktor Kola(" << r << ")" << "\n";
}
double Kolo::GetR() const
{
	return r;
}

void Kolo::SetR(double r)
{
	this->r = r;
}

double Kolo::Obwod()
{
	return 2*M_PI*GetR();
}
double Kolo::Pole()
{
	return GetR() * GetR() * M_PI;
}
double Kolo::Pole(bool czyKula)
{
	if (czyKula)
		return 4 * GetR() * GetR() * M_PI;
	else
	{
		cout << "Nie jest kula";
		return GetR() * GetR() * M_PI;
	}
}
void Kolo::Wypisz(std::ostream& out) const
{
	out << "Kolo o promieniu " << GetR() << "\n";
}
Kolo::~Kolo()
{
	cout << "Destrukcja obiektu Kolo o promieniu " << GetR() << "\n";
	//cout << "Metody: " << this->Obwod() << " || " << this->Pole() << "\n";
}