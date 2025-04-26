#include <iostream>
using namespace std ;
void nNumberTriangle(int n)
{
    int num = 1 ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " " ;
            num++ ;
        }
        cout << "\n" ;
    }
    
}


int main ()
{
    nNumberTriangle(4);
    return 0 ;
}