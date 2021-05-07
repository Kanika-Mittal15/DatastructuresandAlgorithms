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
        cout << "*";

        int s = i - 1;
        for (int j = 1; j <= s; j++)
        {
            cout << "  ";
        }
        if (i != 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}