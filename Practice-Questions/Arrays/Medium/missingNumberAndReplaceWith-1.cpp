/*
Given an array of elements of length N, ranging from 0 to N – 1. All elements may not be present in the array. If the
element is not present then there will be -1 present in the array. Rearrange the array such that A[i] = i and if i is
not present, display -1 at that place.

Examples:
Input : arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
Output : [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]
*/

#include <iostream>
#include <algorithm>
using namespace std;

void fixArray(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int correct = arr[i];
        if (arr[i] != -1 && arr[i] != arr[correct])
        {
            swap(arr[i], arr[correct]);
        }
        else
        {
            i++;
        }
    }
}

// Driver Code
int main()
{
    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    fixArray(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
