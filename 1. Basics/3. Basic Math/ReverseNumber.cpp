#include <iostream>
#include <cstdint>

using namespace std ;


int32_t reverse(int x) {
    int result = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        if (result > INT32_MAX / 10 || (result == INT32_MAX / 10 && digit > 7)) return 0;
        if (result < INT32_MIN / 10 || (result == INT32_MIN / 10 && digit < -8)) return 0;
        result = result * 10 + digit;
    }
    return result;
}

int main()
{
    int x = reverse(111212);
    cout << x;
    return 0;
}