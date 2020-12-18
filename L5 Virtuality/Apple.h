#pragma once
#include <iostream>
#include "Fruit.h"
using namespace std;
class Apple : public Fruit
{
public:
	Apple() {
		cout << "����������� �� ��������� Apple\n";
	}
	Apple(Apple* apple) {
		cout << "����������� � ����������� (Apple* apple)\n";
	}
	Apple(Apple& apple) {
		cout << "���������� ����������� (Apple& apple)\n";
	}

	~Apple() {
		cout << "���������� Apple()\n";
	}
};