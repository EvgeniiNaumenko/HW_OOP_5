#pragma once
class Flat
{
	double _square;
	double _price;

public:
	Flat(); // ����������� �� ��������� ������� ��� ����
	Flat(double, double );// ��  2 ���������
	void operator=(const Flat&); // ������������
	int operator>(const Flat&); // ��������� �� ����
	bool operator==(const Flat&); //��������� ������

};
