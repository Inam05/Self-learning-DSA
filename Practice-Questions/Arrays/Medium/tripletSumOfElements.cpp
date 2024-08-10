/*
Given an array arr[] of size n and an integer X. Find if there’s a triplet in the array which sums up to the given integer X.
Example:
Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
Output: 12, 3, 9
Explanation: There is a triplet (12, 3 and 9) present
in the array whose sum is 24.
*/

#include <iostream>
using namespace std;

bool find3Numbers(int A[], int arr_size, int sum)
{
    for (int i = 0; i < arr_size - 2; i++)
    {
        for (int j = i + 1; j < arr_size - 1; j++)
        {
            for (int k = j + 1; k < arr_size; k++)
            {
                if (A[i] + A[j] + A[k] == sum)
                {
                    cout << "Triplet is " << A[i] << ", " << A[j] << ", " << A[k];
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int A[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
    find3Numbers(A, arr_size, sum);
    return 0;
}
