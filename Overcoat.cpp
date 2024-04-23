#include "Overcoat.h"

Overcoat::Overcoat()
{
	_type = nullptr;
	_price = 0.0;
}


Overcoat::Overcoat(const char* type, double price)
{
	if (type != nullptr)
	{
		int size = strlen(type);
		_type = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			_type[i] = type[i];
		}
		_type[size] = '\0';
		_price = price;
	}
}


Overcoat::~Overcoat()
{
	delete[] _type;
}

Overcoat::Overcoat(const Overcoat& coat)
{
	int size = strlen(coat._type);
	_type = new char[size + 1];
	strcpy_s(_type, size + 1, coat._type);
	_type[size] = '\0';
	_price = coat._price;
}

void Overcoat::operator=(const Overcoat& coat)
{	
	int size = strlen(coat._type);
	_type = new char[size + 1];
	strcpy_s(_type, size + 1, coat._type);
	_type[size] = '\0';
	_price = coat._price;
}

int Overcoat::operator>(const Overcoat& coat)
{
	if (_price > coat._price)
	{
		return 1;
	}
	else if (_price < coat._price)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

bool Overcoat::operator==(const Overcoat& coat)
{
	if (strcmp(this->_type, coat._type) == 0)
	{
		return true;
	}
    return false;
}

