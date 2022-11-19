    Time complexity = O(n)....Iterative
    Space complexity = O(1)....Iterative 
    
    Time complexity = O(2^n).... As we are calling (n-1)+(n-2) ....Recursive 
    Space complexity = O(n).....REcursive
    
    #include <iostream>
    using namespace std;
    int fib(int num) {
        int x = 0, y = 1, z = 0;
        for (int i = 0; i < num; i++) {
            // cout << x << " ";
            z = x + y;
            x = y;
            y = z;
        }
        return x;
    }
    int main() {
        int num;
        cout << "Enter the number : ";
        cin >> num;
        cout << "The fibonacci series : "fib(num);
        return 0;
    }

//recursive
#include @bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 9;
	cout << fib(n);
	getchar();
	return 0;
}
