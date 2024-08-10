/*
Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than
n/2 times (and hence there is at most one such element).
Example:
Input : A[]={3, 4, 2, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is greater than the half of the size of the array size.
*/

#include <iostream>
using namespace std;

class MajorityElementFinder
{
private:
    int *arr;
    int n;

public:
    MajorityElementFinder(int arr[], int size) : arr(arr), n(size) {}

    void findMajority()
    {
        int maxCount = 0;
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }
            if (count > maxCount)
            {
                maxCount = count;
                index = i;
            }
        }
        if (maxCount > n / 2)
        {
            cout << arr[index] << endl;
        }
        else
        {
            cout << "No Majority Element" << endl;
        }
    }
};

int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    MajorityElementFinder finder(arr, n);
    finder.findMajority();

    return 0;
}
