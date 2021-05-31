#ifndef POLYGON_H
#define POLYGON_H
#include <string.h>
#include <string>
#include <time.h>

class polygon
{
	string name;
	int side;
	double len;

public:
	void In();
	void Out();
	double Mod();

	polygon() : name("dsa"), side(rand() % 5 + 3), len((double)(rand()) / RAND_MAX * 7) {}
	~polygon() {}

	friend istream &operator>>(istream &stream, polygon &V);
	friend ifstream &operator>>(ifstream &fstream, polygon &V);
	friend ostream &operator<<(ostream &stream, polygon &V);
	friend ofstream &operator<<(ofstream &fstream, polygon &V);
};

#endif
