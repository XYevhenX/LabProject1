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
bool is_in_domain(double x) {
	return (x > -9) && (x != -4) && (x != 14);
}

int main() {	
	try {
		greeting();
		double x = input();
		cout << "***** do calculations ... ";
		double result;
		if (is_in_domain(x)) {
			//result = f(x);
		}
		else {
			result = NAN;
		}
		cout << "done" << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
}