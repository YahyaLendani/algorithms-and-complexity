// This program reads two numbers and prints their sum, difference, product,
// and all divisors of the first number.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int i;

    cout << "enter first number: ";
    cin >> num1;

    cout << "enter second number: ";
    cin >> num2;

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;

    cout << "Sum is: " << sum << endl;
    cout << "Difference is: " << diff << endl;
    cout << "Product is: " << prod << endl;

    cout << "Divisors of " << num1 << " are: ";
    for (i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

