#include <bits/stdc++.h>
using namespace std;
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))

int search(int a[], int search_element)
{
    int left = 0;
    int right = (my_sizeof(a) / my_sizeof(a[0])) - 1;
    int position = -1;
    for (left = 0; left <= right;)
    {
        if (a[left] == search_element)
        {
            position = left;
            cout << position;
            break;
        }
        if (a[right] == search_element)
        {
            position = right;
            cout << position;
            break;
        }
        left++;
        right--;
    }
    if (position = -1)
    {
        cout << "not found";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    search(a, 5);
    
}