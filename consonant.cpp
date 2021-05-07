#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "enter an alphabet" << endl;
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "vowel" << endl;
        break;
    case 'e':
        cout << "vowel" << endl;
        break;
    case 'i':
        cout << "vowel" << endl;
        break;
    case 'o':
        cout << "vowel" << endl;
        break;
    case 'u':
        cout << "vowel" << endl;
        break;
    default:
        cout << "consonant" << endl;
        break;
    }
    return 0;
}
//a=<<n a=a*2^n
//a=>>n a=/2^n