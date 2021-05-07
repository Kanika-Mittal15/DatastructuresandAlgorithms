#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 3;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0)
            {
                cout << "*";
            }
            else if (i == 2 && j % 4 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}