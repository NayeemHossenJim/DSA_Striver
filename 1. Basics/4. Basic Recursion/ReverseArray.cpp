#include <iostream>
#include <vector>
using namespace std;

void reverse(int i, vector<int> &arr, int n)
{
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    reverse(i+1,arr,n);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(0, arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}