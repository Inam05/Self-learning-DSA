/*
Given an array of size N, find the smallest positive integer value that is either not presented in the array or cannot be represented
as a sum(coz sum means you are adding two or more elements) of some elements from the array.
Example 1:
Input:
N = 6
array[] = {1, 10, 3, 11, 6, 15}
Output:
2
Explanation:
2 is the smallest integer value that cannot
be represented as sum of elements from the array.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long smallestpositive(vector<long long> array, int n)
    {
        sort(array.begin(), array.end());

        long long smallest_missing = 1;

        for (int i = 0; i < n; i++)
        {
            if (array[i] > smallest_missing)
            {
                break; // If the current element is greater than the smallest missing, stop.
            }
            smallest_missing += array[i]; // Otherwise, add the current element to smallest_missing.
        }

        return smallest_missing;
    }
};

int main()
{
    Solution solution;

    vector<long long> array = {1, 10, 3, 11, 6, 15};
    int n = array.size();

    long long result = solution.smallestpositive(array, n);
    cout << "The smallest positive integer that cannot be represented as a sum is: " << result << endl;

    return 0;
}
