#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;


class Drob
{
	int x;
	int y;
public:

	Drob(int a = 0,int b =1);

	void set_x(int a = 0);
		
	void set_y(int a = 1);

	int get_x();

	int get_y();

	void print();

	void plus(Drob a);

	void minus(Drob a);

	void multiply(Drob a);

	void divide(Drob a);

	double get_double();

};