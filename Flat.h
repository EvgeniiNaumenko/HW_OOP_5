#pragma once
class Flat
{
	double _square;
	double _price;

public:
	Flat(); // конструктор по умолчанию оставил как есть
	Flat(double, double );// на  2 параметра
	void operator=(const Flat&); // присваивание
	int operator>(const Flat&); // сравнение по цене
	bool operator==(const Flat&); //сравнение потипу

};
