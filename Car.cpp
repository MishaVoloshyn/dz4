#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
    model = nullptr;
    color = nullptr;
    price = 0;
    year = 0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
    this->model = new char[strlen(m) + 1];
    strcpy_s(this->model, strlen(m) + 1, m);

    this->color= new char[strlen(c) + 1];
    strcpy_s(this->color, strlen(c) + 1, c);

    this->price = pr;
    this->year = y;
}

Car::~Car()
{
    delete[] this->model;
    delete[] this->color;
}

void Car::Input()
{
    char buffMod[20];
    char buffCol[20];
    cout << "Enter model:  ";
    cin >> buffMod;
    cout << "Enter color: ";
    cin >> buffCol;


    if (this->model != nullptr)
    {
        cout << "Delete -> " << this->model << "... \n";
        delete[]this->model;
    }
    this->model = new char[strlen(buffMod) + 1];
    strcpy_s(this->model, strlen(buffMod) + 1, buffMod);

    if (this->color != nullptr)
    {
        cout << "Delete -> " << this->color << "... \n";
        delete[]this->color;
    }
    this->color = new char[strlen(buffCol) + 1];
    strcpy_s(this->color, strlen(buffCol) + 1, buffCol);

    cout << "Enter price: ";
    cin >> this->price;
    cout << "Enter year: ";
    cin >> this->year;
}

void Car::Print()
{
    cout << "Model: " << this->model << "\tcolor: " << this->color << "\tprice: " << this->price << "\tyear: " << this->year << endl;
}

char* Car::GetM()
{
    return  this->model;
}

char* Car::GetC()
{
    return  this->color;
}

int Car::GetYear()
{
    return  this->year;
}

double Car::GetPr()
{
    return  this->price;
}

void Car::SetM(const char* m)
{
    if (this->model != nullptr)
    {
        cout << "Delete -> " << this->model << "... \n";
        delete[] this->model;
    }
    this->model = new char[strlen(m) + 1];
    strcpy_s(this->model, strlen(m) + 1, m);
}

void Car::SetC(const char* c)
{
    if (this->color != nullptr)
    {
        cout << "Delete -> " << this->color << "... \n";
        delete[] this->color;
    }
    this->color = new char[strlen(c) + 1];
    strcpy_s(this->color, strlen(c) + 1, c);
}

void Car::SetYear(int y)
{
    this->year = y;
}

void Car::SetPr(double pr)
{
    this->price = pr;
}
