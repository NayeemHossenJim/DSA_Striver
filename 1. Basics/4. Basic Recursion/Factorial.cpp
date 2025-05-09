#include <iostream>
using namespace std;

int Fac(int n)
{
    if (n==1) return 0;
    return n*Fac(n-1);
}

int main()
{
    int k = Fac(4);
    cout << k;
    return 0;
}