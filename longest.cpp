#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 2;
    int final = 2;
    int j = 2;
    int pd = arr[1] - arr[0];
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            ans++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            ans = 2;
        }
        final = max(final, ans);
        j++;
    }
    cout << final;
    return 0;
}