// Progress meter Example
// By: Adam Bailey
// eMail: abailey7@my.keller.edu

#include <iostream>
#include <progmeter.h>

using namespace std;

int main()
{
	progMeter testitem(500, 0, 70);
	for (double i = 0; i <= 500; i++) {
		testitem.showProgress(i);
	};
}
