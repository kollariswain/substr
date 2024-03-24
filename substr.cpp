#include <string>
#include <iostream>
#include "substr.h"
using namespace std;
isim::isim(string ad2) {
	setad(ad2);
}
void isim::setad(string ad2) {
	if (ad2.length() > 10) {
		ad = ad2.substr(0, 10);
		cout << "maximum char is 10" << endl;
	};
	if (ad2.length() <= 10)
		ad = ad2;
	cout << "welcome " << ad << endl;
};
