#include <iostream>
using namespace std;

void alpha(char ch)
{
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        cout << "alphabet";
    }
    else
    {
        cout << "not";
    }
    return;
}
int main()
{
    char ch;
    cin >> ch;

    alpha(ch);
    return 0;
}