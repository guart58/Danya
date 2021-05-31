#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;
#include "polygon.h"

void polygon::In()
{
	cout << "\nВведите имя многоугольника: ";
	cin >> name[24];
	bool er = true, err = true;
	while (er)
	{
		cout << "\nВведите количество сторон: ";
		cin >> side;
		if (side < 3)
		{
			cout << "\nВы в курсе, что если сторон меньше 3, то это не многоугольник? Давайте вы попробуете еще разок))";
		}
		else
			er = false;
	}

	while (err)
	{
		cout << "\nВведите длину стороны: ";
		cin >> len;
		if (len > 0)
		{
			err = false;
		}
		else
			cout << "\nКак это вообще.. Сторона меньше 1? Это шутка такая, да? Повтори еще разок, пожалуйста..";
	}
}

void polygon::Out()
{
	cout << name << endl
			 << "Сторон: " << side << "\tДлина стороны: " << len << endl;
}

double polygon::Mod()
{
	return (len * side);
}

istream &operator>>(istream &stream, polygon &V)
{
	cout << "\nВведите количество сторон и длину стороны: ";
	stream >> V.side >> V.len;
	return stream;
}

ostream &operator<<(ostream &stream, polygon &V)
{
	stream << "\nМногоугольник: ";
	stream << "\nСторон: " << V.side << "\tДлина стороны: " << V.len;
	cout << "\nВыполнено.";
	return stream;
}

ifstream &operator>>(ifstream &fstream, polygon &V)
{
	fstream >> V.side >> V.len;
	return fstream;
}

ofstream &operator<<(ofstream &fstream, polygon &V)
{
	fstream << "\nМногоугольник: ";
	fstream << "\nСторон: " << V.side << "\tДлина стороны: " << V.len;
	cout << "Выполнил.";
	return fstream;
}
