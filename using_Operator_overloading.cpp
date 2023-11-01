#include <iostream>

class Power {
private:
    double base;

public:
    Power(double b) : base(b) {}

    double operator^(int p) const {
        if (p == 0) {
            return 1; // Any number raised to the power of 0 is 1
        }
        double result = 1;
        for (int i = 0; i < p; i++) {
            result *= base;
        }
        return result;
    }
};

int main() {
    double base;
    int power;
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the power: ";
    std::cin >> power;

    Power number(base);
    std::cout << base << " raised to the power of " << power << " is " << (number ^ power) << std::endl;

    return 0;
}
