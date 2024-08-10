/*
Given a sorted and rotated array arr[] of n distinct elements, the task is to find the index of given target element in the array.
If target is not present in the array, return -1.
Example:
Input  : arr[] = {4, 5, 6, 7, 0, 1, 2}, target = 0
Output : 4
*/

#include <bits/stdc++.h>
using namespace std;

class TargetSearcher
{
private:
    vector<int> nums;

public:
    TargetSearcher(vector<int> &nums) : nums(nums) {}

    int searchTarget(int target)
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] >= nums[left])
            {
                if (target >= nums[left] && target < nums[mid])
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            else
            {
                if (target > nums[mid] && target <= nums[right])
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main()
{
    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    TargetSearcher searcher1(arr1);
    cout << searcher1.searchTarget(0) << endl;

    vector<int> arr2 = {4, 5, 6, 7, 0, 1, 2};
    TargetSearcher searcher2(arr2);
    cout << searcher2.searchTarget(3) << endl;

    return 0;
}
