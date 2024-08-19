/*
Given an array arr. Find the majority element in the array. If no majority exists, return -1.
A majority element in an array of size n is an element that appears strictly more than n/2 times in the array.

Examples:
Input: arr[] = [3, 1, 3, 3, 2]
Output: 3
Explanation: Since, 3 is present more than n/2 times, so it is the majority element.
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int majorityElement(int arr[], int size)
    {
        int candidate = -1, count = 0;

        for (int i = 0; i < size; i++)
        {
            if (count == 0)
            {
                candidate = arr[i];
                count = 1;
            }
            else if (arr[i] == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        count = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == candidate)
            {
                count++;
            }
        }

        if (count > size / 2)
        {
            return candidate;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    Solution solution;

    int arr[] = {3, 1, 3, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = solution.majorityElement(arr, size);
    if (result != -1)
    {
        cout << "Majority element: " << result << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }

    return 0;
}
