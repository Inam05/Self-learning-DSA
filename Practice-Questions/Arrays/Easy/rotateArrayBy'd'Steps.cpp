/*
Given an unsorted array arr[] of size n. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer.
Note: Consider the array as circular.
Examples :
Input: n = 5, d = 2 arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated by 2 elements, it becomes 3 4 5 1 2.
*/

#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void reverseArray(int arr[], int start, int end)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            ++start;
            --end;
        }
    }

    void rotateArr(int arr[], int d, int n)
    {
        if (d >= n)
        {
            d = d % n;
        }

        reverseArray(arr, 0, n - 1);
        reverseArray(arr, 0, n - d - 1);
        reverseArray(arr, n - d, n - 1);
    }
};

int main()
{
    Solution sol;

    // Example 1
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int d1 = 2;
    sol.rotateArr(arr1, d1, n1);

    cout << "Array after rotating by " << d1 << " steps: ";
    for (int i = 0; i < n1; ++i)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Example 2
    int arr2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int d2 = 3;
    sol.rotateArr(arr2, d2, n2);

    cout << "Array after rotating by " << d2 << " steps: ";
    for (int i = 0; i < n2; ++i)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
