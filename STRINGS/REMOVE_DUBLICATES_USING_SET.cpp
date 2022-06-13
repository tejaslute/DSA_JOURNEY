#include<iostream>
#include<set>

using namespace std;
void remove(char str[], int n)
{
    set<char> s(str, str + n - 1);//create a set excluding '/0'
    //print the contents of set
    for (set<char>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it;
    }
}
int main()
{
    char str[100] = { "aaabbbbcccccdddd" };
    int n = strlen(str);
    remove(str, n);
}