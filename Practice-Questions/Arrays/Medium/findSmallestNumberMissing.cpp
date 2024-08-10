/* Given a sorted array of n distinct integers where each integer is in the range from 0 to m-1 and m > n. Find the smallest number that is missing from the array.  */
// C++ program to find the smallest elements
// missing in a sorted array.

#include <iostream>
using namespace std;

class MissingElementFinder
{
private:
    int *array;
    int start;
    int end;

public:
    MissingElementFinder(int array[], int start, int end) : array(array), start(start), end(end) {}

    int findFirstMissing()
    {
        return findFirstMissingHelper(start, end);
    }

private:
    int findFirstMissingHelper(int start, int end)
    {
        if (start > end)
        {
            return end + 1;
        }
        if (start != array[start])
        {
            return start;
        }
        int mid = (start + end) / 2;
        if (array[mid] == mid)
        {
            return findFirstMissingHelper(mid + 1, end);
        }
        return findFirstMissingHelper(start, mid);
    }
};

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    MissingElementFinder finder(arr, 0, n - 1);
    cout << "Smallest missing element is " << finder.findFirstMissing() << endl;
    return 0;
}
