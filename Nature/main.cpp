#include "Nature.h"
#include <iostream>
using namespace std;

int main() 
{
	string area = "forest";
	Area obj(area, 2, 1, 5, 3, 50, 0);

	while (obj.Get_Fox_amount() > 0 && obj.Get_Rabbit_amount() > 0) {
		obj.Check_age();
		obj.Check_amount();
	}

	return 0;
}