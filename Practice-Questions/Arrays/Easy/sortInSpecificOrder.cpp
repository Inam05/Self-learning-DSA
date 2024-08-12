/*
Given an array arr[] of positive integers. Your task is to sort them so that the first part of the array contains 
odd numbers sorted in descending order, and the rest of the portion contains even numbers sorted in ascending order.

Examples:
Input: arr[] = [1, 2, 3, 5, 4, 7, 10]
Output: [7, 5, 3, 1, 2, 4, 10]
Explanation: 7 5 3 1 are odds in descending order and 2 4 10 are evens in ascending order.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void sortIt(vector<long long> &arr)
    {
        vector<long long> odd, even;

        // Separate odd and even numbers
        for (long long num : arr)
        {
            if (num % 2 == 0)
            {
                even.push_back(num);
            }
            else
            {
                odd.push_back(num);
            }
        }

        // Sort odd numbers in descending order
        sort(odd.begin(), odd.end(), greater<long long>());

        // Sort even numbers in ascending order
        sort(even.begin(), even.end());

        // Combine the sorted odd and even numbers
        arr.clear();
        arr.insert(arr.end(), odd.begin(), odd.end());
        arr.insert(arr.end(), even.begin(), even.end());
    }
};

int main()
{
    Solution sol;

    vector<long long> arr1 = {1, 2, 3, 5, 4, 7, 10};
    sol.sortIt(arr1);
    cout << "Sorted array: ";
    for (long long num : arr1)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<long long> arr2 = {6, 1, 2, 5, 3, 4, 7};
    sol.sortIt(arr2);
    cout << "Sorted array: ";
    for (long long num : arr2)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<long long> arr3 = {8, 5, 7, 2, 9, 1};
    sol.sortIt(arr3);
    cout << "Sorted array: ";
    for (long long num : arr3)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}