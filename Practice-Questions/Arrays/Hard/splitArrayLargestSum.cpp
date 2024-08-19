/*
Given an array arr[] of N elements and a number K., split the given array into K subarrays such that the maximum subarray sum achievable
out of K subarrays formed is minimum possible. Find that possible subarray sum.

Example 1:

Input:
N = 4, K = 3
arr[] = {1, 2, 3, 4}
Output: 4
Explanation:
Optimal Split is {1, 2}, {3}, {4}.
Maximum sum of all subarrays is 4,
which is minimum possible for 3 splits.
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:
    bool isValid(int arr[], int N, int K, int maxSum)
    {
        int currentSum = 0;
        int subarrays = 1; // Start with at least one subarray

        for (int i = 0; i < N; i++)
        {
            if (currentSum + arr[i] > maxSum)
            {
                // Create a new subarray
                subarrays++;
                currentSum = arr[i];

                // If number of subarrays exceeds K, it's not possible
                if (subarrays > K)
                    return false;
            }
            else
            {
                currentSum += arr[i];
            }
        }

        return true;
    }

    int splitArray(int arr[], int N, int K)
    {
        int maxElement = *max_element(arr, arr + N);
        int sumOfArray = 0;

        for (int i = 0; i < N; i++)
        {
            sumOfArray += arr[i];
        }

        int left = maxElement;
        int right = sumOfArray;
        int result = right;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (isValid(arr, N, K, mid))
            {
                result = mid;    // Update result to the current valid mid
                right = mid - 1; // Try to find a smaller maximum subarray sum
            }
            else
            {
                left = mid + 1; // Increase the mid value if it's not valid
            }
        }

        return result;
    }
};

int main()
{
    Solution solution;

    int N = 4, K = 3;
    int arr[] = {1, 2, 3, 4};

    int result = solution.splitArray(arr, N, K);
    cout << "Minimum possible maximum subarray sum: " << result << endl;

    return 0;
}
