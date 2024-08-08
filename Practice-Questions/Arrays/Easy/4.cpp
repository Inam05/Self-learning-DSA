/* Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct. */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution solution;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    bool result = solution.containsDuplicate(nums);
    if (result)
    {
        cout << "Duplicate found!" << endl;
    }
    else
    {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
