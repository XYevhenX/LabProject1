#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <format>

using namespace std;

void greeting() {
	cout << "The author of this program is Ziuzin Yevhen.\n";
	cout << "This program calculates the expression from variant by given x. Variant 105.\n";
}
double input() {
	double x;
	cout << "Please, enter x from domain (): ";
	cin >> x;
	if (cin.fail()) {
		throw invalid_argument("wrong input");
	}
	cout << endl;
	return x;
}

int main() {	
	try {
		greeting();
		double x = input();
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
}