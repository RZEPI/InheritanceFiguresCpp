#include "Prostokat.h"
#include <iostream>
using namespace std;
Prostokat::Prostokat(double a, double b)
	: a(a), b(b)
{
	cout << "Konstruktor Prostokata(" << a << "," << b << ")" << endl;
}
double Prostokat::GetA() const {
	return a;
}
double Prostokat::GetB() const {
	return b;
}
void Prostokat::SetA(double a) {
	this->a = a;
}
void Prostokat::SetB(double b) {
	this->b = b;
}

double Prostokat::Obwod()
{
	return 2 * (GetA() + GetB());
}
double Prostokat::Pole()
{
	return  GetA() * GetB();
}
void Prostokat::Wypisz(std::ostream& out) const
{
	out << "Prostokat o bokach " << GetA() << " i " << GetB() << endl;
}
Prostokat::~Prostokat()
{
	cout << "Destrukcja obiektu Prostokat o bokach " << GetA() << " i " << GetB() << endl;
	//cout << "Metody: " << this->Obwod() << " || " << this->Pole() << endl;
}