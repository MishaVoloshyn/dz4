#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	Car a("Audi A5  ", "White  ", 2021, 24000);
	cout << "First car"<<endl;
	a.Print();


	Car b;
	cout << "Defolt car" << endl;
	b.Input();
	b.Print();
	
	Car c;
	cout << "Third car" << endl;
	c.SetM("Toyota");
	c.SetC("White");
	c.SetYear(2008);
	c.SetPr(8500);
	char* model = c.GetM();
	char* color = c.GetC();
	int year = c.GetYear();
	double price = c.GetPr();
	c.Print();
}
