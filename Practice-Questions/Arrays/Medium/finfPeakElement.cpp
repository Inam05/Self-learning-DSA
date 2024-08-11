/*
Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.
Note: If the array is increasing then just print the last element will be the maximum value.

Example:
Input: array[]= {5, 10, 20, 15}
Output: 20
Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20.
Input: array[] = {10, 20, 15, 2, 23, 90, 67}
Output: 20 or 90
Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20, similarly 90 has neighbors 23 and 67.
*/

#include <bits/stdc++.h>
using namespace std;

class PeakFinder
{
private:
    int *arr;
    int n;

public:
    PeakFinder(int array[], int size) : arr(array), n(size) {}

    int findPeakUtil(int low, int high)
    {
        int mid = low + (high - low) / 2;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
            (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return mid;

        else if (mid > 0 && arr[mid - 1] > arr[mid])
            return findPeakUtil(low, mid - 1);

        else
            return findPeakUtil(mid + 1, high);
    }

    int findPeak()
    {
        return findPeakUtil(0, n - 1);
    }
};

int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    PeakFinder finder(arr, n);
    cout << "Index of a peak point is " << finder.findPeak() << endl;

    return 0;
}
