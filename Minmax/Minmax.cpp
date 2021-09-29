#include <iostream>
using namespace std;
void minmax12();
void minmax5();
void minmax1();
void minmax22();
void minmax24();
int main() {
    minmax24();
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
void minmax22() {
    int n, num, min, max;
    float sum = 0;
    float average;
    cout << "Enter the amount of results of your experiment(more than 2):";
    cin >> n;
    if (n <= 2) {
        cout << "The amount of results is not enough";
    }
    else {
        for (int i = 0; i < n; i++) {
            cout << "Enter the number " << i << ":";
            cin >> num;
            sum += num;
            if (i == 0) {
                min = num;
                max = num;
            }
            if (num <= min) {
                min = num;
            }
            if (num >= max) {
                max = num;
            }

        }

    }

    sum = sum - min - max;
    average = sum / 2;
    cout << "The average result of your experiment is:" << average << endl;
}
void minmax24() {
    int n, max, num1, num2, num3;;
    cout << "Enter the amount of numbers(n>1):";
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++) {
            cout << "Enter the number" << ":";
            cin >> num1;
            cout << "Enter the number" << ":";
            cin >> num2;
            if (i == 0) {
                max = num1 + num2;
            }
            if (num1 + num2 > max) {
                max = num1 + num2;
            }
        }
        cout << "Max two nearby numbers is " << max << endl;
    }
    else {
        if (n % 2 != 0) {
            for (int i = 0; i < n / 2; i++) {
                cout << "Enter the number" << ":";
                cin >> num1;
                cout << "Enter the number" << ":";
                cin >> num2;
                if (i == 0) {
                    max = num1 + num2;
                }
                if (num1 + num2 > max) {
                    max = num1 + num2;
                }
            }
            cout << "Enter the last number" << ":";
            cin >> num3;
            if (num3 + num2 > max) {
                cout << "Max two nearby numbers is " << num2 + num3 << endl;
            }
            else {
                if (num3 + num2 < max) {
                    cout << "Max two nearby numbers is " << max << endl;
                }
            }
        }
    }

}


