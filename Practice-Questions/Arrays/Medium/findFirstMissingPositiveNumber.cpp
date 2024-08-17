/*
Given an unsorted array of integers, write a function to find the smallest positive integer that is missing from the array.
*/

#include <iostream>
#include <vector>
using namespace std;

class ArrayUtils
{
public:
    static int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
            {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] != i + 1)
                return i + 1;
        }
        return n + 1;
    }
};

int main()
{
    vector<int> nums = {3, 4, -1, 1};
    cout << "First missing positive integer: " << ArrayUtils::firstMissingPositive(nums) << endl;
    return 0;
}
