#include<iostream>
#include<cmath>
using namespace std;
void proc1();
void proc4();
void proc7();
void proc32();
void proc35();
int main() {
	proc35();
}
void TrianglePS(float a, float P, float S) {
	P = 3 * a;
	float help = 0.5;
	S = a * a * pow(3, help) / 4;
	cout << "P=" << P << "    S=" << S << endl;
}
void InvertDigits(int K) {
	int Help = 1;
	while (K % 10 != 0) {
		cout << K % 10;
		K /= 10;
	}
}
void DegToRad(float D) {
	float r;
	r = D * 3.14 / 180;
	cout << "R=" << r << endl;
}
void Fact2n(int N) {
	int i;
	int factorial = 1;
	if (N <= 0) {
		cout << "Error";
	}
	else {
		if (N % 2 == 0) {

			i = 2;
			while (i <= N) {
				factorial *= i;
				i += 2;
			}

		}
		else {
			if (N % 2 != 0) {
				i = 1;
				while (i <= N) {
					factorial *= i;
					i += 2;
				}
			}
		}
	}
	cout << "N!!=" << factorial;
}
void proc1() {
	long int A, B;
	int i = 1;
	cout << "Enter the number A:";
	cin >> A;
	for (i; i <= 5; i++) {
		B = pow(A, 3);
		A = B;
		cout << A << endl;
	}
}

void proc4() {
	float a;
	float P;
	float S;
	for (int i = 1; i <= 3; i++) {
		cout << "Enter the side of the equal-side triangle:";
		cin >> a;
		TrianglePS(a, P, S);
	}

}
void proc7() {
	int K;
	for (int i = 1; i <= 5; i++) {
		cout << "Enter the number K:";
		cin >> K;
		InvertDigits(K);
		cout << endl;

	}
}
void proc32() {
	int i = 1;
	float D;
	for (i; i <= 5; i++) {
		cout << "Enter the corner in degrees:";
		cin >> D;
		DegToRad(D);
	}
}
void proc35() {
	int N;
	int i = 5;
	for (i; i <= 5; i++) {
		cout << "Enter N:";
		cin >> N;
		Fact2n(N);
	}
}

