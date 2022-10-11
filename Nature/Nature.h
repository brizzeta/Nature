#include <iostream>
using namespace std;

#pragma once
class Fox
{
	int amount;
	int age;
public: 
	Fox() = default;
	Fox(int val_amount, int val_age);
	int Get_amount();
	int Get_age();
	void Set_amount(int value);
	void Set_age(int value);
};

class Rabbit
{
	int amount;
	int age;
public:
	Rabbit() = default;
	Rabbit(int val_amount, int val_age);
	int Get_amount();
	int Get_age();
	void Set_amount(int value);
	void Set_age(int value);
};

class Grass
{
	int amount;
	int age;
public:
	Grass() = default;
	Grass(int val_amount, int val_age);
	int Get_amount();
	int Get_age();
	void Set_amount(int value);
	void Set_age(int value);
};

class Area
{
	Fox fox;
	Rabbit rabbit;
	Grass grass;
	string area;
	int year;
public:
	Area() = default;
	Area(string str_area, int val_am_fox, int val_age_fox, int val_am_rabb, int val_age_rabb, int val_am_gras, int val_age_gras);
	void Check_age();
	void Check_amount();
	int Get_Fox_amount();
	int Get_Rabbit_amount();
};
