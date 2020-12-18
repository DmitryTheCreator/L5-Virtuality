#pragma once
#include "Parent.h"
#include <iostream>
using namespace std;

class Child : public Parent
{
protected:
	bool cry;
	string classname = "Child";
public:
	Child() : Parent() {
		cry = true;
		cout << "Конструктор по умолчанию " + classname + "()\n";
	}

	Child(int age, int money, bool cry) : Parent(age, money) {
		this->cry = cry;
		cout << "Конструктор с параметрами " + classname + "(int age, int money, bool cry)\n";
	}

	Child(Child& child) : Parent(child) {
		this->cry = child.cry;
		cout << "Копирующий конструктор " + classname + "(Child& child)\n";
	}

	string className() {
		cout << "Метода classname() класса " + classname + " -> ";
		return classname;
	}

	bool isA(string classname) {
		cout << "Метод isA(string classname) класса " + classname + " -> ";
		if (classname == "Child")
			return true;
		return false;
	}

	void method() {
		cout << "Метод " + classname + "\n";
	}

	virtual ~Child() {
		cout << "Виртуальный деструктор ~" + classname + "\n";
	}
};

