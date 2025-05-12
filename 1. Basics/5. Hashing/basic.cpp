#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
    int n ;
    cout << "Enter your vector size : " ;
    cin >> n ;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector <int> hash(13,0) ;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1 ;
    }

    int key ;
    cout << "Enter which frequency want to find : " ;
    cin >> key ;

    cout << hash[key] ;
    return 0 ;
}