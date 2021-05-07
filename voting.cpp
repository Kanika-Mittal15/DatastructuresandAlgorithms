#include <iostream>
using namespace std;

void vote(int age)
{
    if (age >= 18)
    {
        cout << "eligible";
    }
    else
    {
        cout << "not eligible";
    }
    return;
}

int main()
{
    int age;
    cin >> age;

    vote(age);

    return 0;
}