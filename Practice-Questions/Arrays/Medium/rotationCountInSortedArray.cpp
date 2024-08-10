/*
Given an array arr[] of size N having distinct numbers sorted in increasing order and the array has been right rotated
(i.e, the last element will be cyclically shifted to the starting position of the array) k number of times, the task is to find the value of k.
Examples:
Input: arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation: Initial array must be {2, 3, 6, 12, 15, 18}.
We get the given array after rotating the initial array twice.
*/

#include <iostream>
using namespace std;

class RotationCounter
{
private:
    int *arr;
    int n;

public:
    RotationCounter(int arr[], int size) : arr(arr), n(size) {}

    int countRotations()
    {
        int min = arr[0], min_index = 0;
        for (int i = 0; i < n; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
                min_index = i;
            }
        }
        return min_index;
    }
};

int main()
{
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    RotationCounter counter(arr, n);
    cout << counter.countRotations() << endl;
    return 0;
}
