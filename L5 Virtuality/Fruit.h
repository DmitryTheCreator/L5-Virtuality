#pragma once
#include <iostream>
using namespace std;
class Fruit
{
public:
	Fruit() {
		cout << "����������� �� ��������� Fruit\n";
	}
	Fruit(Fruit* fruit) {
		cout << "����������� � ����������� (Fruit* fruit)\n";
	}
	Fruit(Fruit& fruit) {
		cout << "���������� ����������� (Fruit& fruit)\n";
	}

	~Fruit() {
		cout << "���������� Fruit()\n";
	}
};


