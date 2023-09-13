#include <iostream>

int main() {
    int num = 10; // Example integer
    int i = 2;    // Bit position to set (0-based index)

    // Create a bitmask with a 1 at the i-th position and all other bits 0
    int bitmask = 1 << i;

    // Set the bit at the i-th position in the integer using bitwise OR
    num = num | bitmask;

    std::cout << "Modified number: " << num << std::endl;

    return 0;
}
