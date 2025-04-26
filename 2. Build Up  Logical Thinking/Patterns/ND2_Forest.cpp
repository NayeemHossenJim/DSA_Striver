#include <iostream>
using namespace std ;
void nD2Forest(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* " ;
        }
        cout << "\n" ;
    }
    
}


int main ()
{
    nD2Forest(4);
    return 0 ;
}