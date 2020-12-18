#pragma once
#include "Fruit.h"
#include <iostream>
using namespace std;

class Apple : public Fruit
{
public:
	Apple() {
		cout << "Конструктор по умолчанию Apple\n";
	}
	Apple(Apple* apple) {
		cout << "Конструктор с параметрами (Apple* apple)\n";
	}
	Apple(Apple& apple) {
		cout << "Копирующий конструктор (Apple& apple)\n";
	}

	~Apple() {
		cout << "Деструктор Apple()\n";
	}
};
