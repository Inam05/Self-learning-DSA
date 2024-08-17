/*
Given an array of integers, write a function to find all unique triplets in the array that sum up to zero.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ArrayUtils
{
public:
    static vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; ++i)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        ++left;
                    while (left < right && nums[right] == nums[right - 1])
                        --right;
                    ++left;
                    --right;
                }
                else if (sum < 0)
                {
                    ++left;
                }
                else
                {
                    --right;
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> triplets = ArrayUtils::threeSum(nums);
    cout << "Triplets that sum to zero:" << endl;
    for (const auto &triplet : triplets)
    {
        for (int num : triplet)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}
