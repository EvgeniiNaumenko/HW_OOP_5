#include <iostream>
using namespace std;
#include "Flat.h"
#include "Overcoat.h"


//�������� �1
//�������� ���� Overcoat(������� ����).����������
//������������� ��������� :
//1. �������� �� ������� ���� �����(�������� � == �).
//2. �������� ������������ ������ �ᒺ��� ������(�������� � = �).
//3. ��������� �� ����� ���� ������ ������ ����(�������� � > �).

//�������� �2
//�������� ���� Flat(��������).���������� ������������� ��������� :
//1. �������� �� ������� ���� �������(�������� � == �).
//2. �������� ������������ ������ �ᒺ��� ������(�������� � = �).
//3. ��������� ���� ������� �� �����(�������� � > �).


int main()
{
	
	// �������� � ������� �������
	Overcoat type1("Trench coat",100.99);
	Overcoat type2("Leather jacket",90.99);
	Overcoat type3("Hoodie",80.50);
	Overcoat type4("Parka",111.11);
	cout << (type1 == type2) << endl;// �������� �� ��������� 1 ����� 0 �� �����
	type1 = type4;
	cout << (type1 == type4) << endl;// �������� �� ��������� 1 �����0 �� �����
	cout << (type1 > type4) << endl; // �������� �� ��������� ���� 1 ������ ������ 0 ����� -1 ������ ������
	cout << (type3 > type2) << endl; // �������� �� ��������� ���� 1 ������ ������ 0 ����� -1 ������ ������
	cout << (type1 > type4) << endl; // �������� �� ��������� ���� 1 ������ ������ 0 ����� -1 ������ ������
	Overcoat type5 = type2;
	cout << (type5 > type2) << endl; // �������� �� ��������� ���� 1 ������ ������ 0 ����� -1 ������ ������

	// �������� � ������� �������
	cout << "2 exercise" << endl;
	Flat F1(54.6, 154200);
	Flat F2(54.6, 134200);
	Flat F3(79.6, 254200);
	Flat F4(87.5, 224200);
	Flat F5;
	F5 = F1;
	cout << (F1 == F4) << endl;// �������� �� ��������� 1 ����� 0 �� �����
	cout << (F1 == F2) << endl;// �������� �� ��������� 1 ����� 0 �� �����
	cout << (F1 > F4) << endl; // �������� �� ��������� ���� 1 ������ ������ 0 ����� -1 ������ ������
	cout << (F5 > F2) << endl; // �������� �� ��������� ���� 1 ������ ������ 0 ����� -1 ������ ������
	return 0;
}