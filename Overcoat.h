#pragma once
#include <iostream>
using namespace std;
class Overcoat
{
	char* _type;
	double _price;

public:
	Overcoat(); // ����������� �� ��������� ������� ��� ����
	Overcoat(const char* type, double price);// ��  2 ���������
	~Overcoat(); //���������� 
	Overcoat(const Overcoat&);
	void operator=(const Overcoat&); // ������������
	int operator>(const Overcoat&); // ��������� �� ����
	bool operator==(const Overcoat&); //��������� ������

};

