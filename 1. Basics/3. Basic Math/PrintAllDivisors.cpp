#include <iostream>
using namespace std ;

void PrintDivisors(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            cout << i << " " ;
        }
    }
    
}
int main()
{   
    PrintDivisors(32) ;
    return 0;
}