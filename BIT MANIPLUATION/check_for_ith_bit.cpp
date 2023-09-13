// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n=10;
    int pos;
    cout<<"Enter position to check its bit : ";
    cin>>pos;
    
    // for checking the ith bit do right shift and check bit is on or not using & operator .
    
    n=n>>pos-1;
    
    cout<<( 1&n) ;

    return 0;
}
