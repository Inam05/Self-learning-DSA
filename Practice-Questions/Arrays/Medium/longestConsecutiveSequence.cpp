/*
Given an unsorted array of integers, write a function to find the length of the longest consecutive elements sequence.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class ArrayUtils
{
public:
    static int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for (int num : nums)
        {
            if (numSet.find(num - 1) == numSet.end())
            {
                int currentNum = num;
                int length = 1;
                while (numSet.find(currentNum + 1) != numSet.end())
                {
                    ++currentNum;
                    ++length;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Length of longest consecutive sequence: " << ArrayUtils::longestConsecutive(nums) << endl;
    return 0;
}
