#include <iostream>
#include <string>
#include "Car.h"
using namespace std;



int main()
{
	Car Betsy;
	Betsy.setNumOfHeadlights(2);
	cout << Betsy.getNumOfHeadights();
	cout << endl;
	Betsy.setHeadlightStatus(true);
	cout << Betsy.getHeadlightStatus();

	return 0;
}

