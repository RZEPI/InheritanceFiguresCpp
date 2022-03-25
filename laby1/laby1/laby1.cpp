#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"
#include <iostream>

#define LICZBA_TYPOW 3

#define PRZERWA cout << "\n\n\n";

using namespace std;


void wywolajMetody(FiguraPlaska *figura)
{
	cout << "Obwod figury wskazanej przez wskaznika na typ bazowy: " << figura->Obwod() << "\n";
	cout << "Pole figury wskazanej przez wskaznika na typ bazowy: " << figura->Pole() << "\n";
}

int main()
{
	Prostokat pr(1, 2);
	Trojkat tr(1, 2, 2.5);
	Kolo kol(3);

	FiguraPlaska* wsk = &kol;

	PRZERWA

	cout << pr << "\n" << tr << "\n" << kol << "\n\n\n";//prezentacja operatora przypisania

	PRZERWA

	pr.SetA(5);
	pr.SetB(7);
	tr.SetA(2);
	kol.SetR(10);

	cout << pr << "\n" << tr << "\n" << kol << "\n\n\n";//prezentacja operatora przypisania
	
	PRZERWA
														
	//wywołanie metod
	cout << "Obwod prostokata: " << pr.Obwod() << "\nPole prostokata: " << pr.Pole() << "\n";
	cout << "Obwod trojkata: " << tr.Obwod() << "\nPole trojkata: " << tr.Pole() << "\n";
	cout << "Obwod kola: " << kol.Obwod() << "\nPole trojkata: " << kol.Pole() << "\n\n";

	cout << "Wywolanie metod przez wskaznik: " << wsk->Obwod() << ", " << wsk->Pole();

	PRZERWA

	//metody wirtualne
	FiguraPlaska* bazowyTyp[3];
	bazowyTyp[0] = new Prostokat(2, 5);
	bazowyTyp[1] = new Trojkat(3, 3, 5);
	bazowyTyp[2] = new Kolo(8);
	
	PRZERWA

	for (int i = 0; i < LICZBA_TYPOW; i++)
		wywolajMetody(bazowyTyp[i]);

	PRZERWA

	for (int i = 0; i < LICZBA_TYPOW; i++)
		bazowyTyp[i]->~FiguraPlaska();

	PRZERWA

	//wywołanie przeciążonej funkcji

	cout << "Pole kuli " << kol.Pole(1) << "\n";// funkcja przeciążona 
	cout << "Pole kola " << kol.Pole() << "\n";//funkcja nieprzeciążona 

	PRZERWA

}

