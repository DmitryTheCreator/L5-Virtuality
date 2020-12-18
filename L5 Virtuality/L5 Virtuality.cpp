#include <iostream>
#include <Windows.h>
#include "Fruit.h"
#include "Apple.h"
#include "Parent.h"
#include "Child.h"

using namespace std;

void f1(Fruit fruit) {
	cout << "f1(Fruit fruit)\n";
}

void f2(Fruit* fruit) {
	cout << "f2(Fruit* fruit)\n";
}

void f3(Fruit& fruit) {
	cout << "f3(Fruit& fruit)\n";
}

void main()
{
	setlocale(LC_ALL, "");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
	cout << "Создание объектов\n";
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	Parent* parent1 = new Parent();
	Parent* parent2 = new Child();
	Child* child1 = new Child();

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
	cout << "\nПроверка на принадлежность через метод isA\n";
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	cout << parent1->isA("Parent") << endl;
	cout << parent2->isA("Child") << endl;
	cout << child1->isA("Parent") << endl;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
	cout << "\nПроверка на принадлежность через метод classname\n";
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	cout << parent1->className() << endl;
	cout << parent2->className() << endl;
	cout << child1->className() << endl;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
	cout << "\nПриведение типов через dynamic_cast\n";
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	Child* child2 = dynamic_cast<Child*>(parent2);
	cout << child2->className() << endl;
	child2->method();
	parent2->method();

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
	cout << "\nНебезопасное приведение типов\n";
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	Child* child3 = new Child();
	if (parent2->isA("Child"))
	{
		cout << "1\n";
		child3 = (Child*)parent2;
	}
	child3->method();
	parent2->method();

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
	cout << "\nУдаление объектов\n";
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	delete parent1;
	delete parent2;
	delete child1;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
	cout << "\nПередача Fruit в качестве параметра функций\n\n";
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	Fruit fruit1;
	f1(fruit1);
	cout << endl;
	Fruit* fruit2 = new Fruit();
	f2(fruit2);
	cout << endl;
	Fruit fruit3;
	f3(fruit3);
	cout << endl;
	delete fruit2;
		
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
	cout << "\nПередача Apple в качестве параметра функций\n\n";
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	Apple apple1;
	f1(apple1);
	cout << endl;
	Apple* apple2 = new Apple();
	f2(apple2);
	cout << endl;
	Apple apple3;
	f3(apple3);
	cout << endl;
	delete apple2;	
}
