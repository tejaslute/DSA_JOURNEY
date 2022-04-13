// SUM_OF_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getSum(int* arr, int size) {
    if (size == 0) {
        return 0;
    }
    if (size == 1)
        return arr[0];
    else {
        int ans = arr[0] + getSum(arr + 1, size - 1);
        return ans;
    }

}

int main() {
    // Write C++ code here
    int arr[4] = { 4,3,6,8 };
    cout << getSum(arr, 4);

    return 0;
}