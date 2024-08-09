/* Given an integer array nums, find the subarray with the largest sum, and return its sum. */

#include <iostream>
#include <vector>
#include <climits> 

using namespace std;

int maxSubarraySum(const vector<int> &nums)
{
    if (nums.empty())
    {
        return 0; 
    }
    int max_current = 0;
    int max_global = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        max_current = max(nums[i], max_current + nums[i]);
        if (max_current > max_global)
        {
            max_global = max_current;
        }
    }

    return max_global;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum subarray sum is: " << maxSubarraySum(nums) << endl;
    return 0;
}
