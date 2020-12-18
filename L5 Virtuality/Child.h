#pragma once
#include <iostream>
#include "Parent.h"
using namespace std;
class Child : public Parent
{
protected:
	bool cry;
	string classname = "Child";
public:
	Child() {
		cry = true;
		cout << "����������� �� ��������� Parent()\n";
	}

	Child(int age, int money, bool cry) : Parent(age, money) {
		this->cry = cry;
		cout << "����������� � ����������� " + classname + "(int age, int money, bool cry)\n";
	}

	Child(Child& child) : Parent(child) {
		this->cry = child.cry;
		cout << "���������� ����������� " + classname + "(Child& child)\n";
	}

	void method() {
		cout << "����� " + classname + "\n";
	}
	virtual ~Child() {
		cout << "����������� ���������� ~" + classname + "\n";
	}
};

