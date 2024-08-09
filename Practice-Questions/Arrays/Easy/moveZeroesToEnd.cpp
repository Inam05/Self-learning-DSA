/* Move all zeroes to the end of the array. */
#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int> &nums)
{
    int n = nums.size();
    int nonZeroIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[nonZeroIndex]);
            ++nonZeroIndex;
        }
    }
}

int main()
{
    vector<int> nums = {3, 30, 0, 0, 4, 0, 0, 1, 0};
    moveZeroesToEnd(nums);

    cout << "Array after moving zeroes to end: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
