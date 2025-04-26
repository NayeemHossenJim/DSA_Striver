#include <iostream>
using namespace std ;
void nStarTriangle(int n)
{
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = (i > n) ? (2 * n - i) : i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*" ;
        }
        cout << "\n" ;
    }
}


int main ()
{
    nStarTriangle(3);
    return 0 ;
}