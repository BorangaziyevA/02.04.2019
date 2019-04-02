#include "Drob.h"

Drob::Drob(int a, int b)
{
	set_x(a);
	set_y(b);
}

void Drob::set_x(int a)
{
	x = a;
}

void Drob::set_y(int a)
{
	if (a == 0)
	{
		y = 1;
	}
	else
		y = a;
}

int Drob::get_x()
{
	return x;
}

int Drob::get_y()
{
	return y;
}

void Drob::print()
{
	cout << x << "/" << y << endl;
}

void Drob::plus(Drob a)
{
	if (a.y == y)
	{
		x = a.x + x;
	}
	else
	{
		x = (a.x*y + x * a.y);
		y = a.y*y;
	}

}

void Drob::minus(Drob a)
{
	if (a.y == y)
	{
		x = a.x - x;
	}
	else
	{
		x = (x * a.y - a.x*y );
		y = a.y*y;
	}
}

void Drob::multiply(Drob a)
{
	x = a.x *x;
	y = a.y *y;
}

void Drob::divide(Drob a)
{
	x = a.x *y;
	y = a.y *x;
}

double Drob::get_double()
{
	return (float)x / y;
}