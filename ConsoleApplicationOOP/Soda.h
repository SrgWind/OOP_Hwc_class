#pragma once
#include "GoodBasic.h"

class Soda : public GoodBasic
{
private:
	double _liter;
	string _taste;
public:
	Soda();
	Soda(int id);
	Soda(int id, int price);
	Soda(int id, int price, string name);
	Soda(int id, int price, string name, string description);
	Soda(int id, int price, string name, string description, int _weight);
	Soda(int id, int price, string name, string description, int _weight, string _typeOfTaste);

	int getLiter();

	void setLiter(int newLiter);

	string getTaste();

	void setTaste(string newTaste);


	void toString();
};