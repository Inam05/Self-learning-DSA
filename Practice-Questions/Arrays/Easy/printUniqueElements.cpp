/*
Given an integer array, print all distinct elements in an array. The given array may contain duplicates and the
output should print every element only once. The given array is not sorted.

Examples:
Input: arr[] = {12, 10, 9, 45, 2, 10, 10, 45}
Output: 12, 10, 9, 45, 2

Input: arr[] = {1, 2, 3, 4, 5}
Output: 1, 2, 3, 4, 5

Input: arr[] = {1, 1, 1, 1, 1}
Output: 1
*/

#include <iostream>
using namespace std;

class ArrayProcessor
{
public:
    ArrayProcessor(int arr[], int size) : arr(arr), size(size) {}

    void printDistinct()
    {
        for (int i = 0; i < size; i++)
        {
            int j;
            for (j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    break;
                }
            }
            if (i == j)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

private:
    int *arr;
    int size;
};

int main()
{
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    ArrayProcessor arrayProcessor(arr, n);
    arrayProcessor.printDistinct();

    return 0;
}
