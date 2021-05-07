#include <bits/stdc++.h>
using namespace std;

//Quick Sort based on Divide and Conquer Algorithm in which we choose a pivot and arrange the elements on the left and right of the pivot recursively
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int i = l - 1;
    int pivot = arr[r];
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main()
{
    // your code goes here
    int arr[5] = {12, 46, 22, 234, 12};
    quickSort(arr, 0, 4); //right is less than 1
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//Time Complexity for Quick Sort
//For the best case if the pivot is present in the middle then the prblm is divide into two halves and time complexity will be same as merge Sort
//O(N LogN)
//for the worst case if the pivot is found at the end then
//O(N^2)  //T(N-1)+N