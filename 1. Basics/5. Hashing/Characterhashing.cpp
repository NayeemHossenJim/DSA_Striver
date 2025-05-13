#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
    string n ;
    cout << "Enter your string : " ;
    cin >> n ;

    vector <int> hash(256) ;
    for (int i = 0; i < n.size(); i++)
    {
        hash[n[i]]++ ;
    }
    
    char key ;
    cout << "Enter which frequency want to find : " ;
    cin >> key ;

    cout << hash[key] ;
    return 0 ;
}