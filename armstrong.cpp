#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int digit = n % 10;
        sum += pow(digit, 3);
        n = n / 10;
    }
    if (sum == original)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not armstrong";
    }
    return 0;
}