#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int n;
    n = a;
    a = b;
    b = n;
    cout << a << endl
         << b;
    return;
}

int main()
{
    int a, b;
    cin >> a >> b;

    swap(a, b);

    return 0;
}