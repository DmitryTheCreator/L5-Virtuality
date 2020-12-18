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
		cout << "����������� �� ��������� " + classname + "()\n";
	}

	Child(int age, int money, bool cry) : Parent(age, money) {
		this->cry = cry;
		cout << "����������� � ����������� " + classname + "(int age, int money, bool cry)\n";
	}

	Child(Child& child) : Parent(child) {
		this->cry = child.cry;
		cout << "���������� ����������� " + classname + "(Child& child)\n";
	}

	string className() {
		cout << "������ classname() ������ " + classname + " -> ";
		return classname;
	}

	bool isA(string classname) {
		cout << "����� isA(string classname) ������ " + classname + " -> ";
		if (classname == "Child")
			return true;
		return false;
	}

	void method() {
		cout << "����� " + classname + "\n";
	}

	virtual ~Child() {
		cout << "����������� ���������� ~" + classname + "\n";
	}
};

