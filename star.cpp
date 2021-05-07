#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i; j > 1; j--)
        {
            cout << "*";
        }
        for (int j = space; j >= 1; j--)
        {
            cout << " ";
        }

        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        for (int j = i; j > 1; j--)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}