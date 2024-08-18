/*
Given an array of integers, our task is to write a program that efficiently finds the second-largest element present in the array.

Examples:
Input: arr[] = {12, 35, 1, 10, 34, 1}
Output: The second largest element is 34.
Explanation: The largest element of the array is 35 and the second largest element is 34
*/

#include <bits/stdc++.h>
using namespace std;

class ArrayProcessor
{
public:
    ArrayProcessor(int arr[], int size)
    {
        this->arr = arr;
        this->size = size;
    }

    void findSecondLargest()
    {
        sort(arr, arr + size, greater<int>());
        for (int i = 1; i < size; i++)
        {
            if (arr[i] != arr[0])
            {
                printf("The second largest element is %d\n", arr[i]);
                return;
            }
        }
        printf("There is no second largest element\n");
    }

private:
    int *arr;
    int size;
};

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    ArrayProcessor arrayProcessor(arr, n);
    arrayProcessor.findSecondLargest();

    return 0;
}
