#include <iostream>
#include <fstream>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <string>
#include <string.h>
using namespace std;
#include "polygon.h"

int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	ifstream fin;
	ofstream fout;

	polygon A;
	polygon B;
	polygon C;
//	polygon D;

	cin >> A >> B;
	cout << A << B;

	fin.open("C:\\Users\\Ваксий\\Desktop\\grt\\f1.txt", ios::_Nocreate);
	fin >> C;
	fin.close();
	cout << C;
	fout.open("C:\\Users\\Ваксий\\Desktop\\grt\\f2.txt", ios::_Nocreate | ios::app);
	fout << C;
	fout.close();

	//cout << "\nВведите многоугольник.";
	//A.In();
	//cout << "\nМногоугольник А: ";
	//A.Out();
	//cout << "\nПериметр Правильного многоугольника равен: " << A.Mod() << endl;

}
