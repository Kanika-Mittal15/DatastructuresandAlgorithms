#include <iostream>
using namespace std;

int decimal(int n)
{
    int x = 1;
    int ans = 0;
    while (n > 0)
    {
        int y = n % 10;
        ans += y * x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << decimal(n);
    return 0;
}