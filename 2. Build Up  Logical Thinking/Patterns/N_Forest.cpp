#include <iostream>
using namespace std ;
void nForest(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* " ;
        }
        cout << "\n" ;
    }
    
}


int main ()
{
    nForest(4);
    return 0 ;
}