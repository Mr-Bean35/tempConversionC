/*
PROGRAM NAME: tempConverion.cpp
DATE: 05-10-22
PROGRAMMER NAME: Benjamin Hensley Jr.
*/

#include <iostream>
using namespace std;

int main() {
	string cf;
	double conv;
	double ans;

	
	while (true) {
		cout << "Is your starting number Fahrenheit or Celcius: ";
		cin >> cf;
		if (cf == "f" || cf == "F") {
			cout << "Please enter in your number: ";
			cin >> conv;

			ans = (conv - 32) * 5 / 9;
			cout << ans;
			break;
		}
		else if (cf == "c" || cf == "C") {
			cout << "Please enter in your number: ";
			cin >> conv;

			ans = (conv * 9 / 5) + 32;
			cout << ans;
			break;
		}
		else {
			cout << "Please Enter in a valid answer" << endl;
		}
	}

	return 0;
}