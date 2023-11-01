#include <iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int base_int, exponent;
    double base_double;
    
    cout << "Enter an integer base: ";
    cin >> base_int;
    cout << "Enter an integer exponent: ";
    cin >> exponent;
    cout << "Result of integer power: " << power(base_int, exponent) <<endl;

    cout << "Enter a double base: ";
    cin >> base_double;
    cout << "Enter an integer exponent: ";
    cin >> exponent;
    cout << "Result of double power: " << power(base_double, exponent) << endl;

    return 0;
}
