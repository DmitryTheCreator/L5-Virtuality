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
		cout << "����������� �� ��������� " + classname + "()\n";
	}

	Parent(int age, int money) {
		this->age = age;
		this->money = money;
		cout << "����������� � ����������� " + classname + "(int age, int money\n)";
	}

	Parent(Parent& parent) {
		this->age = parent.age;
		this->money = parent.money;
		cout << "���������� ����������� " + classname + "(Parent& parent)\n";
	}

	virtual string className() {
		cout << "������ classname() ������ " + classname + " -> ";
		return classname;
	}

	virtual bool isA(string classname) {
		cout << "����� isA(string classname) ������ " + classname + " -> ";
		if (classname == "Parent") 
			return true;
		return false;
	}

	void method() {
		cout << "����� " + classname + "\n";
	}
	virtual ~Parent() {
		cout << "����������� ���������� ~" + classname + "\n";
	}
};


