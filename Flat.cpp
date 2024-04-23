#include "Flat.h"

Flat::Flat() :Flat(0, 0) {}

Flat::Flat(double square, double price)
{
	_square = square;
	_price = price;
}

void Flat::operator=(const Flat& home)
{
	_square = home._square;
	_price = home._price;
}

int Flat::operator>(const Flat& home)
{
	if (_price >home._price)
	{
		return 1;
	}
	else if (_price < home._price)
	{
		return -1;
	}
	return 0;
}

bool Flat::operator==(const Flat& home)
{
	if (_square == home._square)
	{
		return true;
	}
	return false;
}
