#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n==0) return 0;
    return n+Sum(n-1);
}

int main()
{
    int k = Sum(4);
    cout << k;
    return 0;
}