#include <iostream>
using namespace std;

int sumn(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ans = sumn(n);
    cout << ans;
    return 0;
}