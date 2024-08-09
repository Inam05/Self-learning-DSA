/*
Given an integer array arr[]. Find the contiguous sub-array(containing at least one number) that has the maximum sum and return its sum.
Examples:
Input: arr[] = [1, 2, 3, -2, 5]
Output: 9
Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long long maxSubarraySum(vector<int> &arr)
    {
        long long max_sum = arr[0];
        long long current_sum = arr[0];

        for (int i = 1; i < arr.size(); ++i)
        {
            current_sum = max(static_cast<long long>(arr[i]), current_sum + arr[i]);
            max_sum = max(max_sum, current_sum);
        }

        return max_sum;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    long long result = sol.maxSubarraySum(arr);
    cout << "Maximum subarray sum is " << result << endl;
    return 0;
}
