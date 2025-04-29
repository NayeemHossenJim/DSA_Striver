#include <iostream>
using namespace std ;

bool isPalindrome(int x) 
{
    int temp = x ;
    long long result = 0;
    while (x > 0) {
        int digit = x % 10;
        x /= 10;
        result = result * 10 + digit;
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
    cout << isPalindrome(-121);
    return 0;
}