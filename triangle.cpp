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
        int count = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count = count + 1;
        }
        int spaces = n - i;
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}