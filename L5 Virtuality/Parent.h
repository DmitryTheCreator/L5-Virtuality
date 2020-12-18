#pragma once
#include <iostream>
using namespace std;

class Parent
{
protected:
	int age, money;
	string classname = "Parent";
public:
	Parent() {
		age = 40;
		money = 40000;
		cout << "Конструктор по умолчанию " + classname + "()\n";
	}

	Parent(int age, int money) {
		this->age = age;
		this->money = money;
		cout << "Конструктор с параметрами " + classname + "(int age, int money\n)";
	}

	Parent(Parent& parent) {
		this->age = parent.age;
		this->money = parent.money;
		cout << "Копирующий конструктор " + classname + "(Parent& parent)\n";
	}

	virtual string className() {
		cout << "Метода classname() класса " + classname + " -> ";
		return classname;
	}

	virtual bool isA(string classname) {
		cout << "Метод isA(string classname) класса " + classname + " -> ";
		if (classname == "Parent") 
			return true;
		return false;
	}

	void method() {
		cout << "Метод " + classname + "\n";
	}
	virtual ~Parent() {
		cout << "Виртуальный деструктор ~" + classname + "\n";
	}
};


