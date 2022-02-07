#include "Soda.h"

Soda::Soda() :
	GoodBasic{ 0, 1, "noname", "nodescription" } {
	_liter = 2;
	_taste = "notaste";
}
Soda::Soda(int id) :
	GoodBasic{ id, 1, "noname", "nodescription" } {
	_liter = 1;
	_taste = "notaste";
}
Soda::Soda(int id, int price) :
	GoodBasic{ id, price, "noname", "nodescription" } {
	_liter = 1;
	_taste = "notaste";
}
Soda::Soda(int id, int price, string name) :
	GoodBasic{ id, price, name, "nodescription" } {
	_liter = 1;
	_taste = "notaste";
}
Soda::Soda(int id, int price, string name, string description) :
	GoodBasic{ id, price, name, description } {
	_liter = 1;
	_taste = "notaste";
}
Soda::Soda(int id, int price, string name, string description, int liter) :
	GoodBasic{ id, price, name, description } {
	_liter = liter;
	_taste = "Lemon";
}
Soda::Soda(int id, int price, string name, string description, int liter, string taste) :
	GoodBasic{ id, price, name, description } {
	_liter = liter;
	_taste = taste;
}

int Soda::getLiter() {
	return _liter;
}

void Soda::setLiter(int newLiter) {
	if (newLiter <= 0 || newLiter > 20) {
		_liter = 1.5;
	}
	else {
		_liter = newLiter;
	}
}

string Soda::getTaste() {
	return _taste;
}

void Soda::setTaste(string newTaste) {
	_taste = newTaste;
}

void Soda::toString() {
	cout << "toString From Soda:" << getItemId() << " " << getPrice()
		<< " " << getName() << " " << getDescription() << " Литраж:"
		<< getLiter() << "  Тип вкуса:" << getTaste() << "\n";
}