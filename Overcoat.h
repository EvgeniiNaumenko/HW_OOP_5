#pragma once
#include <iostream>
using namespace std;
class Overcoat
{
	char* _type;
	double _price;

public:
	Overcoat(); // конструктор по умолчанию оставил как есть
	Overcoat(const char* type, double price);// на  2 параметра
	~Overcoat(); //деструктор 
	Overcoat(const Overcoat&);
	void operator=(const Overcoat&); // присваивание
	int operator>(const Overcoat&); // сравнение по цене
	bool operator==(const Overcoat&); //сравнение потипу

};

