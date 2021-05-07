#include <iostream>
using namespace std;

void max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            cout << a;
            break;
        }
    }
    else if (b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }

    return;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    max(a, b, c);
    return 0;
}