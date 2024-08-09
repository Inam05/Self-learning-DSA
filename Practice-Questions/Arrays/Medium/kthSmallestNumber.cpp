/*
Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest
element in the given array. It is given that all array elements are distinct
Note:-  l and r denotes the starting and ending index of the array.
Input:
n = 6
arr[] = 7 10 4 3 20 15
k = 3
l=0 r=5
Output :
7
Explanation :
3rd smallest element in the given
array is 7.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Solution
{
public:
    int partition(int arr[], int l, int r)
    {
        int pivot = arr[r];
        int i = l - 1;

        for (int j = l; j < r; ++j)
        {
            if (arr[j] <= pivot)
            {
                ++i;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[r]);
        return i + 1;
    }

    int quickSelect(int arr[], int l, int r, int k)
    {
        if (l <= r)
        {
            int pivotIndex = l + rand() % (r - l + 1);
            swap(arr[pivotIndex], arr[r]);

            int partitionIndex = partition(arr, l, r);

            if (partitionIndex == k)
            {
                return arr[partitionIndex];
            }
            else if (partitionIndex < k)
            {
                return quickSelect(arr, partitionIndex + 1, r, k);
            }
            else
            {
                return quickSelect(arr, l, partitionIndex - 1, k);
            }
        }
        return -1;
    }

    int kthSmallest(int arr[], int l, int r, int k)
    {
        if (k > 0 && k <= r - l + 1)
        {
            return quickSelect(arr, l, r, l + k - 1);
        }
        return -1;
    }
};

// Example usage
int main()
{
    Solution sol;
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = sol.kthSmallest(arr, 0, n - 1, k);
    cout << "The " << k << "rd smallest element is " << result << endl;

    return 0;
}
