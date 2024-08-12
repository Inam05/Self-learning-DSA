/*
Given an array arr[] of positive integers where every element appears even times except for one. Find that number occurring
an odd number of times.

Examples:
Input: arr[] = [1, 1, 2, 2, 2]
Output: 2
Explanation: In the given array all element appear two times except 2 which appears thrice.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int getSingle(vector<int> &arr)
    {
        int result = 0;
        for (int num : arr)
        {
            result ^= num;
        }
        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> arr1 = {1, 1, 2, 2, 2}; // Example 1
    cout << "Number occurring odd times for arr1: " << sol.getSingle(arr1) << endl;

    vector<int> arr2 = {4, 1, 2, 1, 2}; // Example 2
    cout << "Number occurring odd times for arr2: " << sol.getSingle(arr2) << endl;

    vector<int> arr3 = {5, 5, 5, 3, 3, 3, 7}; // Example 3
    cout << "Number occurring odd times for arr3: " << sol.getSingle(arr3) << endl;

    return 0;
}
