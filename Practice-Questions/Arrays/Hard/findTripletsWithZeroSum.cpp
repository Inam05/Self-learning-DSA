/*
Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.

Examples :
Input: arr[] = {0, -1, 2, -3, 1}
Output: (0 -1 1), (2 -3 1)
Explanation: The triplets with zero sum are 0 + -1 + 1 = 0 and 2 + -3 + 1 = 0
*/

#include <bits/stdc++.h>
using namespace std;

class TripletFinder
{
private:
    int *arr;
    int n;

public:
    TripletFinder(int array[], int size)
        : arr(array), n(size) {}

    void findTriplets()
    {
        bool found = false;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == 0)
                    {
                        cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                        found = true;
                    }
                }
            }
        }

        if (!found)
            cout << "not exist" << endl;
    }
};

int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    TripletFinder finder(arr, n);
    finder.findTriplets();

    return 0;
}
