#include <iostream>
using namespace std ;
void starTraingle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << " " ;
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << "*" ;
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout << " " ;
        }
        cout << "\n" ;
    }
}


int main ()
{
    starTraingle(4);
    return 0 ;
}