#pragma once
#include <iostream>
using namespace std;
class Fruit
{
public:
	Fruit() {
		cout << "Конструктор по умолчанию Fruit\n";
	}
	Fruit(Fruit* fruit) {
		cout << "Конструктор с параметрами (Fruit* fruit)\n";
	}
	Fruit(Fruit& fruit) {
		cout << "Копирующий конструктор (Fruit& fruit)\n";
	}

	~Fruit() {
		cout << "Деструктор Fruit()\n";
	}
};


