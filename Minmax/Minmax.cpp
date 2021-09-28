#include <iostream>
using namespace std;
void minmax12();
void minmax5();
void minmax1();
int main() {
	minmax12();
}
void minmax1() {
	int num, num1, i = 1;
	int min, max;
	cout << "Enter the amount of numbers:";
	cin >> num;
	for (i; i <= num; i++) {
		cout << "Enter number" << i << ":";
		cin >> num1;
		if (i == 1) {
			max = num1;
			min = num1;
		}
		if (num1 <= min) {
			min = num1;
		}
		if (num1 >= max) {
			max = num1;
		}
	}
	cout << "min=" << min << endl;
	cout << "max=" << max;
}
void minmax5() {
	int m, v, density;
	int num, max;
	int i = 1;
	cout << "Enter the number of the details:";
	cin >> num;
	for (i; i <= num; i++) {
		cout << "Enter the weight and the density of the detail " << i << ":";
		cin >> m >> v;
		density = m / v;
		if (i == 1) {
			max = density;
		}
		if (density >= max) {
			max = density;
		}
	}
	cout << "The max density has the detail number " << i << " The density is:" << max;
}
void minmax12() {
	int num, num1, i = 1;
	int min = 0;
	cout << "Enter the amount of numbers:";
	cin >> num;
	for (i; i <= num; i++) {
		cout << "Enter number" << i << ":";
		cin >> num1;
		if (num1 > 0) {
			min = num1;
		}
		if ((num1 < min) && (num1 > 0)) {
			min = num1;
		}
		if (min == 0) {
			cout << "0" << endl;
		}
		else {
			cout << "Min=" << min << endl;
		}

	}
}
