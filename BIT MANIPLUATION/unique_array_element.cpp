// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Find single digit non repeating
    int n=0;
    
    int a[5]={1,1,2,3,3};
    
    for(int i=0;i<a.size();i++)
    {
        n=n^a[i];
    }
    
    cout<<n<<endl;
    return 0;
    
    
    
}
