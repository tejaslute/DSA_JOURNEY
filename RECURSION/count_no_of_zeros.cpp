#include <iostream>

int zeros(int n, int count = 0) {
    if (n == 0) {
        return count;
    }
    if (n % 10 == 0) {
        count++;
    }
    return zeros(n / 10, count);
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    int zeroCount = zeros(n);
    std::cout << "Number of zeros in " << n << ": " << zeroCount << std::endl;

    return 0;
}
