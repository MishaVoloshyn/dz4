#pragma once
class Car
{
	char* model;
	char* color;
	int year;
	double price;
public:
	Car();
	Car(const char* m, const char* c, int y, double pr);
	~Car();
	void Input();
	void Print();


    char* GetM();
	char* GetC();
	int GetYear();
	double GetPr();

	void SetM(const char* m);
	void SetC(const char* c);
	void SetYear(int y);
	void SetPr(double pr);


};

