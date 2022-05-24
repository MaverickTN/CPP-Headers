// progmeter.h : Displays progress when executing functions.
// By: Adam Bailey
// eMail: abailey7@my.keller.edu
#include <iostream>
#include <progmeter.h>

using namespace std;

int main()
{
	progMeter testitem(10000000, 0, 70);
	for (int i = 0; i <= 10000000; i++) {
		testitem.showProgress(i);
	};
}
