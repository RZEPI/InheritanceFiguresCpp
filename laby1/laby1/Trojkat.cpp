#include "Trojkat.h"
#include <iostream>

using namespace std;

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c)
{
	cout << "Konstruktor Trojkata(" << a << ", " << b << ", " << c << ")" << "\n";
}
double Trojkat::GetA() const
{
	return a;
}
double Trojkat::GetB() const
{
	return b;
}
void Trojkat::SetA(double a)
{
	this->a = a;
}
void Trojkat::SetB(double b)
{
	this->b = b;
}
double Trojkat::GetC() const
{
	return c;
}
void Trojkat::SetC(double c)
{
	this->c = c;
}
double Trojkat::Obwod()
{
	return GetA() + GetB() + GetC();
}
double Trojkat::Pole()
{
	double p = this->Obwod();
	p /= 2;
	double pole = sqrt(p * (p - GetA()) * (p - GetB()) * (p - GetC()));
	return pole;
}
void Trojkat::Wypisz(std::ostream& out) const
{
	out << "Trojkat o bokach " << GetA() << ", " << GetB() << " i " << GetC() << "\n";
}
Trojkat::~Trojkat()
{
	cout << "Destrukcja obiektu Trojkat o bokach " << GetA() << ", " << GetB() << " i " << GetC() << "\n";
	//cout << "Metody: " << this->Obwod() << " || " << this->Pole() << "\n";
}