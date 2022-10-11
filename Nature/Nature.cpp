#include "Nature.h"

Fox::Fox(int val_amount, int val_age)
{
	amount = val_amount;
	age = val_age;
}

int Fox::Get_amount() {
	return amount;
}

int Fox::Get_age() {
	return age;
}

void Fox::Set_amount(int value) {
	amount = value;
}

void Fox::Set_age(int value) {
	age = value;
}


Rabbit::Rabbit(int val_amount, int val_age)
{
	amount = val_amount;
	age = val_age;
}

int Rabbit::Get_amount() {
	return amount;
}

int Rabbit::Get_age() {
	return age;
}

void Rabbit::Set_amount(int value) {
	amount = value;
}

void Rabbit::Set_age(int value) {
	age = value;
}


Grass::Grass(int val_amount, int val_age)
{
	amount = val_amount;
	age = val_age;
}

int Grass::Get_amount() {
	return amount;
}

int Grass::Get_age() {
	return age;
}

void Grass::Set_amount(int value) {
	amount = value;
}

void Grass::Set_age(int value) {
	age = value;
}


Area::Area(string str_area, int val_am_fox, int val_age_fox, int val_am_rabb, int val_age_rabb, int val_am_gras, int val_age_gras) : fox(val_am_fox, val_age_fox), rabbit(val_am_rabb, val_age_rabb), grass(val_am_gras, val_age_gras)
{
	area = str_area;
	year = 1;
}

int Area::Get_Fox_amount() {
	return fox.Get_amount();
}

int Area::Get_Rabbit_amount() {
	return rabbit.Get_amount();
}

void Area::Check_age()
{
	if (grass.Get_age() > 1) {
		grass.Set_amount(0);
		cout << "Grass disappear" << endl;

		if (year > 1) {
			grass.Set_amount(grass.Get_amount() + 15);
			cout << "15 pieces of grass grew" << endl;
		}
		year++;
	}
	if (rabbit.Get_age() > 9) {
		rabbit.Set_amount(0);
		cout << "Rabbits died" << endl;
	}
	if (fox.Get_age() > 3) {
		rabbit.Set_amount(0);
		cout << "Foxes died" << endl;
	}
}

void Area::Check_amount()
{
	if (grass.Get_amount() == 0) {
		rabbit.Set_amount(0);
		cout << "Rabbits died" << endl;
	}
	if (rabbit.Get_amount() == 0) {
		fox.Set_amount(0);
		cout << "Foxes died" << endl;
	}
	if (rabbit.Get_amount() == 0 && fox.Get_amount() == 0) {
		grass.Set_amount(0);
		cout << "Grass disappear" << endl;
	}

	if (rabbit.Get_amount() > grass.Get_amount()) {
		grass.Set_amount(0);
		cout << "Grass eaten" << endl;
	}
	if (rabbit.Get_amount() < fox.Get_amount()) {
		rabbit.Set_amount(0);
		cout << "Rabbits eaten" << endl;
	}

	if (rabbit.Get_amount() > 0) {
		rabbit.Set_amount(rabbit.Get_amount() + 5);
		cout << "5 rabbits burn" << endl;

		rabbit.Set_age(rabbit.Get_age() + 1);
		cout << "Age of rabbits increased on 1 year" << endl;
	}
	if (fox.Get_amount() > 0 && fox.Get_amount() < 5) {
		fox.Set_amount(fox.Get_amount() + 1);
		cout << "1 fox burn" << endl;

		fox.Set_age(fox.Get_age() + 1);
		cout << "Age of foxes increased on 1 year" << endl;
	}
	grass.Set_age(grass.Get_age() + 1);
	cout << "Age of grass increased on 1 year" << endl;
}