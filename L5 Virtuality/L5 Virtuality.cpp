#include <iostream>
#include "Fruit.h"
#include "Apple.h"
#include "Parent.h"
#include "Child.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	Parent* parent1 = new Parent();
	Parent* parent2 = new Child();
	Child* child1 = new Child();

	cout << "\nПроверка на принадлежность через метод isA\n";
	cout << parent1->isA("Parent") << endl;
	cout << parent2->isA("Child") << endl;
	cout << child1->isA("Parent") << endl;

	cout << "\nПроверка на принадлежность через метод classname\n";
	cout << parent1->className() << endl;
	cout << parent2->className() << endl;
	cout << child1->className() << endl;

	cout << "\nУдаление объектов\n";
	delete parent1;
	delete parent2;
	delete child1;
}
