/*
Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.

Example 1:
Input:
m = 3, n = 4
array1[] = {1,5,9}
array2[] = {2,3,6,7}
Output: 5
Explanation: The middle element for
{1,2,3,5,6,7,9} is 5
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution
{
public:
    double MedianOfArrays(vector<int> &array1, vector<int> &array2)
    {
        if (array1.size() > array2.size())
        {
            return MedianOfArrays(array2, array1); // Ensure that array1 is the smaller array
        }

        int m = array1.size();
        int n = array2.size();
        int low = 0, high = m;

        while (low <= high)
        {
            int partition1 = (low + high) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;

            int maxLeft1 = (partition1 == 0) ? INT_MIN : array1[partition1 - 1];
            int minRight1 = (partition1 == m) ? INT_MAX : array1[partition1];

            int maxLeft2 = (partition2 == 0) ? INT_MIN : array2[partition2 - 1];
            int minRight2 = (partition2 == n) ? INT_MAX : array2[partition2];

            // Check if the partition is correct
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1)
            {
                // If the total number of elements is odd
                if ((m + n) % 2 == 1)
                {
                    return max(maxLeft1, maxLeft2);
                }
                else
                {
                    // If the total number of elements is even
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                }
            }
            else if (maxLeft1 > minRight2)
            {
                // We are too far to the right, move left
                high = partition1 - 1;
            }
            else
            {
                // We are too far to the left, move right
                low = partition1 + 1;
            }
        }

        // If input arrays are not sorted or something goes wrong
        throw invalid_argument("Input arrays are not sorted or no solution exists.");
    }
};

int main()
{
    Solution solution;

    // Test case 1
    vector<int> array1 = {1, 5, 9};
    vector<int> array2 = {2, 3, 6, 7};
    double result = solution.MedianOfArrays(array1, array2);
    cout << "Median: " << result << endl; // Expected output: 5

    // Test case 2
    vector<int> array3 = {1, 2};
    vector<int> array4 = {3, 4};
    result = solution.MedianOfArrays(array3, array4);
    cout << "Median: " << result << endl; // Expected output: 2.5

    // Test case 3
    vector<int> array5 = {1, 3};
    vector<int> array6 = {2};
    result = solution.MedianOfArrays(array5, array6);
    cout << "Median: " << result << endl; // Expected output: 2

    // Test case 4
    vector<int> array7 = {1, 2, 3, 4};
    vector<int> array8 = {5, 6, 7, 8, 9};
    result = solution.MedianOfArrays(array7, array8);
    cout << "Median: " << result << endl; // Expected output: 5

    return 0;
}
