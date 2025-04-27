#include <iostream>
using namespace std ;
int countDigit(long long x) 
{
    int count = 0 ;
    while (x > 0)
    {
        count = count + 1 ;
        x = x / 10 ;
    }
    return count ;
}

int main ()
{
    int  x = countDigit(550) ;
    cout << x ;
    return 0 ;
}