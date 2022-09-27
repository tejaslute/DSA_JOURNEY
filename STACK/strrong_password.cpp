#include <bits/stdc++.h>
using namespace std;
 
void printStrongNess(string& input)
{
    int n = input.length();
 
    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, specialChar = false;
    bool has$=false;
    for (int i = 0; i < n; i++) {
        if (islower(input[i]))
            hasLower = true;
        if (isupper(input[i]))
            hasUpper = true;
        if (isdigit(input[i]))
            hasDigit = true;
            
        if(input[input.length()-1]=='$')
        {
            has$=true;
        }
    }
 
    
 
    if (hasLower && hasUpper && hasDigit && (n >= 8) && has$)
        cout << " Your Password is Strong" << endl;
    
    else
        cout << "Your Password is Not Strong " << endl;
}
 
// Driver code
int main()
{
    string input ;
    cin>>input;
    printStrongNess(input);
    return 0;
}
