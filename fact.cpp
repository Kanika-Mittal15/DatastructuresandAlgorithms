#include <iostream>
using namespace std;

void fact(int n)
{
    int t1 = 1;
    for (int i = 1; i <= n; i++)
    {
        t1 = t1 * i;
    }
    cout << t1;
    return;
}
int main()
{
    int n;
    cin >> n;

    fact(n);

    return 0;
}