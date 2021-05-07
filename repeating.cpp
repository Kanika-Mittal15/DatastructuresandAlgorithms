#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1e6 + 2;
    int ind[N];
    for (int i = 0; i < n; i++)
    {
        ind[i] = -1;
    }
    int mindx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ind[a[i]] != -1)
        {
            mindx = min(mindx, ind[a[i]])
        }
        else
        {
            ind[a[i]] = i;
        }
    }
    if (mindx == INT_MAX)
    {
        cout << "-1";
    }
    else
    {
        cout << mindx + 1;
    }
    return 0;
}