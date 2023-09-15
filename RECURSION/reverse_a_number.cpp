#include <iostream>

int reverse(int n, int reversed = 0) {
    if (n == 0) {
        return reversed;
    } else {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        return reverse(n / 10, reversed);
    }
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    int reversed = reverse(n);
    std::cout << "Reversed number: " << reversed << std::endl;

    return 0;
}
