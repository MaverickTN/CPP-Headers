// progmeter.h : Displays progress when executing functions.
// By: Adam Bailey
// eMail: abailey7@my.keller.edu

#pragma once
#include <iostream>
#ifndef _WIN32_
#define OS_Windows 1
#endif


namespace std
{
	class progMeter
	{
	public:
		int items;
		int	progress;
		int length;

		progMeter(int a, int b, int c) {
			items = a;
			progress = b;
			length = c;
		}
	
		void showProgress(double progress) {
			if (items = 0) {
				items = 1;
			}
			double percentage = (progress / items);
			cout << "Progress:" << "(" << progress << "/" << items << ") [";
			for (double i = 0;i <= length; ++i) {
				if (i <= (percentage * length)) {
					if (OS_Windows) {
						cout << "#";
					}
					else {
						cout << "\u2588";
					}
				}
				else {
					cout << " ";
				}
			}
			if (percentage <= 1) {
				cout << "]" << (percentage * 100) << "% \r";
			}
			cout.flush();
		}
	};
}
