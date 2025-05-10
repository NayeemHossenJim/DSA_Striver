#include <iostream>
using namespace std;

bool PallinDrome(int i, string &s)
{
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    else return PallinDrome(i+1,s) ;
}

int main()
{
    string x = "madam";
    cout << PallinDrome(0,x) ;
    return 0;
}