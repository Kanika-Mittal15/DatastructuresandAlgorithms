#include <bits/stdc++.h>
#include <vector>
#define numeric
using namespace std;

bool myComapre(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

//vectors and pairs
//vectors are the dynamic arrays whose size is not defined and everytime it is filled vector gets doubled.
//syntax vector<data type>name(size,value)
int main()
{
    // your code goes here
    vector<int> v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(3);
    //iterating through vectors by iterators
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    //for each loop using auto
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    for (auto element : v1)
    {
        cout << element << " ";
    }
    cout << endl;
    //swapping the elements of two vectors
    v.swap(v1);
    for (auto element : v1)
    {
        cout << element << " ";
    }
    cout << endl;
    //sort , we can add customer operators to it as well
    sort(v.begin(), v.end());
    for (auto element : v1)
    {
        cout << element << " ";
    }
    cout << endl;
    //to find sum in vector , we use accumulate defined in <numeric>libraray
    int sum = accumulate(v.begin(), v.end(), 1);
    cout << sum << endl;
    ; //1+4+5+6
    //max_element return iterator to the max element
    int mx = *max_element(v.begin(), v.end());
    cout << mx << endl;
    int mn = *min_element(v.begin(), v.end());
    cout << mn << endl;
    //converts vector v into prefix sum vector
    partial_sum(v.begin(), v.end(), v.begin());
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    //pairs
    pair<int, char> p;
    p.first = 3;
    p.second = 'l';

    int arr[] = {10, 213, 21, 4, 12, 6};
    //to sort an array using comparators and storing their index values instead of the value using pairs
    vector<pair<int, int>> v2;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        v2.push_back(make_pair(arr[i], i));
    }
    //myComapre is acomparator i.e how we want to compare the elements of the vector
    sort(v2.begin(), v2.end(), myComapre);
    for (int i = 0; i < v2.size(); i++)
    {
        arr[v2[i].second] = i; //v2.second = {3,5,0,4,2,1}
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //2d vector i.e.vector inside a vector
    vector<vector<int>> v3{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    for (int i = 0; i < v3.size(); i++)
    {
        for (int j = 0; j < v3[i].size(); j++)
        {
            cout << v3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
