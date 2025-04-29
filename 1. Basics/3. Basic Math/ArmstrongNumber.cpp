#include <iostream>
#include <math.h>
using namespace std ;

bool isArmStrong(int x) 
{
    int temp = x ;
    int result = 0;
    while (x > 0) {
        int digit = x % 10;
        x /= 10;
        digit = pow(digit,3);
        result = result + digit;
    }
    if (result == temp)
    {
        return result = true ;
    }
    else
    {
        return result = false ;
    }
    return result;
}

int main()
{
    cout << isArmStrong(371);
    return 0;
}