#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n<1) return 0;

    int sum = 0;
    sum = sum + n ;
    return Sum(n-1);
}


int main()
{
    int k = Sum(4);
    cout << k;
    return 0;
}