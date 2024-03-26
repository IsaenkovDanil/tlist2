// LAB10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "Header.h"
#include <stdlib.h>
#include <iterator>
#include <vector>
#include <algorithm>    // std::for_each
#include <stdio.h>    // std::for_each
#include<initializer_list>
using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");

	int szvec1;
	cout << "Введите размер 1 вектора" << endl;;
	cin >> szvec1;
	double* vec1massiv = new double[szvec1];
	set_pdataINITe(szvec1, vec1massiv);
	tlist<double> a(szvec1, vec1massiv);
	a.output();
	cout << endl;
	int szvec2;
	cout << "Введите размер 2 вектора" << endl;;
	cin >> szvec2;
	double* vec2massiv = new double[szvec2];
	set_pdataINITe(szvec2, vec2massiv);
	tlist<double> b(szvec2, vec2massiv); 
	b.output();
	cout << endl;
/*
	tlist<double> c=move(a);	
	//a.output();
	b.output();
	c.output();
	a.size();
	cout << endl;
*/
/*
	tlist<double>* pv11 = &a;
	tlist<double>* pv12 = &b;
	pv11->output();
	pv12->output();
	tlist<double>& pv21 = a;
	tlist<double>& pv22 = b;
	pv21.output();
	pv22.output();
	*/
//	tlist<double> c = b;
//	c.output();
cout << "---------------" << a.size() << " -------" << b.size()<<endl;
	tlist<double> t{ 50,48949,194894,14894 };
	t.output();
	cout << "------------"<<*(t.begin())<<endl;

		cout << "Scalar(a,b) =  " << Scalar(a, b) << endl;

		cout << "a.Length() =   " <<a.Length() << endl;
			cout << "b.Length() =  " << b.Length() << endl;
			cout << "sum =   " << endl;
			sum(a, b).output();      
		cout << "dif = " << endl;
		dif(a, b).output();
		a.add(b); a.output();
		a.sub(b); a.output();
/**/
}
