#include "Drob.h"

int main()
{
	Drob a(5,3);

	Drob b(10,2);

	a.print();

	a.plus(b);

	a.print();

	system("pause");
}