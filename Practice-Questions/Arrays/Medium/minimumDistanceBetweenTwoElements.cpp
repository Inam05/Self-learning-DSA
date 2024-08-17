/*
Given an array of integers and two distinct values, write a function to find the minimum distance between the two values in the array.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class ArrayUtils
{
public:
    static int minDistance(vector<int> &nums, int x, int y)
    {
        int minDist = INT_MAX;
        int lastX = -1, lastY = -1;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == x)
            {
                if (lastY != -1)
                    minDist = min(minDist, i - lastY);
                lastX = i;
            }
            if (nums[i] == y)
            {
                if (lastX != -1)
                    minDist = min(minDist, i - lastX);
                lastY = i;
            }
        }
        return (minDist == INT_MAX) ? -1 : minDist;
    }
};

int main()
{
    vector<int> nums = {3, 5, 1, 2, 5, 2, 6};
    int x = 5, y = 2;
    cout << "Minimum distance between " << x << " and " << y << ": " << ArrayUtils::minDistance(nums, x, y) << endl;
    return 0;
}
