#include<iostream>
#include<cmath>
using namespace std;
void series1();
void series5();
void series10();
void series12();
void series26();
int main() {
    series26();
}
void series1() {
    int i = 10;
    int num1;
    int sum = 0;
    for (int num2 = 1; num2 <= i; num2++) {
        cout << "enter the number" << num2 << ":";
        cin >> num1;
        sum += num1;
    }
    cout << "sum=" << sum;
}

void series5() {
    int N, amount, sum = 0;
    float number;
    cout << "Enter the amount of numbers:";
    cin >> N;
    for (amount = 1; amount <= N; amount++) {
        cout << "Enter number " << amount << ":" << endl;
        cin >> number;
        cout << (int)number << endl;
        sum += (int)number;
    }
    cout << "Sum of the numbers is " << sum << endl;
}
void series10() {
    int N, amount = 1;
    bool check = 0;
    float number;
    cout << "Enter the amount of numbers:";
    cin >> N;
    for (amount; amount <= N; amount++) {
        cout << "Enter number " << amount << ":";
        cin >> number;
        if (number > 0) check = 1;
    }
    if (check == 1) {
        cout << "True";
    }
    else {
        cout << "False";
    }
}
void series12() {
    int N, amount = 1;
    float number;
    bool check = 1;
    for (amount; check = 1; amount++) {
        cout << "Enter number " << amount << ":";
        cin >> number;
        if (number == 0) break;
    }
    cout << amount << endl;
}
void series26() {
    int N;
    double K, number;
    int amount = 1;
    long int number1;
    cout << "Enter the numbers K and N:";
    cin >> K >> N;
    for (amount; amount <= N; amount++) {
        cout << "Enter number " << amount << ":";
        cin >> number;
        number1 = pow(number, K);
        cout << number1 << endl;
    }
}

