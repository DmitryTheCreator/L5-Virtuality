#pragma once
#include "Fruit.h"
#include <iostream>
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
