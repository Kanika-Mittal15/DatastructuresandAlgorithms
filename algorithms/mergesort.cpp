#include <iostream>
using namespace std;

//Merge Sort is based on Divide and Conquer Algorithm i.e. we divide a problem till we get the solution
//in this we sort the left part and the right part and then merge them together
//6 3 9 5 2 8 7 1 //diving into two halves
//6 3 9 5  and 2 8 7 1
//6 3 , 9 5 , 2 8 , 7 1
//6, 3 , 9, 5, 2 , 8 , 7 ,1
//now merge them by sort
//3 6 , 5 9,    2 8 , 17
//3569   1278
//12356789 final

//count inversion
int merge(int arr[], int l, int mid, int r, int x, int y)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2]; //temp arrays
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
            count += (n2 - i);
        }
    }
    while (i < n1)
    { //if we have done comparison and we are left with elements in the temp arrays then we need to print those also
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    return count;
}

int mergeSort(int arr[], int l, int r)
{
    int inv = 0;
    if (l < r)
    {

        int mid = (l + r) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r, 8, 13);
    }
    return inv;
}
int main()
{
    // your code goes here
    int arr[] = {3, 5, 5, 2, 6};
    cout << mergeSort(arr, 0, 4); //right less than 1

    return 0;
}

//Time Complexity of Merge sort
//O(N logN)  //N=2^k
//Space Complexity
//O(N)
