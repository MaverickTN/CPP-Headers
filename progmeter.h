// progMeter.h : Displays progress when executing functions.
// By: Adam Bailey

#pragma once
#include <iostream>
#ifndef _WIN32_
#define OS_Windows 1
#endif


namespace std
{
	class progMeter
	{
	private:
		int items;
		double progress;
		int length;
	public:
		progMeter(int a, double b, int c) {
			items = a;
			progress = b;
			length = c;
		}
	
		void showProgress(double progress) {
			double percentage = (progress/items);
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
			cout << "]" << (percentage * 100) << "% \r";
			cout.flush();
		}
	};
}
