#include <iostream>
using namespace std ;
void nTriangles(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " " ;
        }
        cout << "\n" ;
    }
    
}


int main ()
{
    nTriangles(4);
    return 0 ;
}