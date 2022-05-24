// progmeter.h : Displays progress when executing functions.
// By: Adam Bailey
// eMail: abailey7@my.keller.edu

#pragma once
#include <iostream>
#include <iomanip>
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
	
		void showProgress(int progress) {
			
			double percentage = (progress / items);
			if (items <= 0) {
				percentage = 1;
			}
			else {
				percentage = (progress / items);
			}
			
			if (percentage <= 1) {
				cout << "Progress:" << "(" << progress << "/" << items << ") [";
				for (int i = 0;i <= length; ++i) {
					if (i <= (percentage * length)) {
						if (OS_Windows) {
							cout << "#"; //Progress Output for Windows Shell
						}
						else {
							cout << "\u2588"; //Output for shell environments supporting UTF-8.
						}
					}
					else {
						cout << " ";
					}
				}
					cout << "]" << fixed << setprecision(2) << (percentage * 100) << "% \r";
				}
			cout.flush();
		}
	};
}
