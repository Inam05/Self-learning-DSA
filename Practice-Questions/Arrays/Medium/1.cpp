/* Given a sorted array of n distinct integers where each integer is in the range from 0 to m-1 and m > n. Find the smallest number that is missing from the array.  */
// C++ program to find the smallest elements
// missing in a sorted array.

#include <iostream>
using namespace std;

int findFirstMissing(int array[], int start, int end)
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
        return findFirstMissing(array, mid + 1, end);
    }
    return findFirstMissing(array, start, mid);
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Smallest missing element is " << findFirstMissing(arr, 0, n - 1) << endl;
}

/*
Second approach
#include <iostream>
using namespace std;

int findFirstMissing(int array[], int start, int end) {
    if (start > end) {
        return end + 1; // If start index is greater than end, return end + 1
    }

    int mid = (start + end) / 2;

    // Check if the missing element is on the left or right side of mid
    if (array[mid] != mid) {
        return findFirstMissing(array, start, mid - 1);
    } else {
        return findFirstMissing(array, mid + 1, end);
    }
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Smallest missing element is " << findFirstMissing(arr, 0, n - 1) << endl;
    return 0;
}

*/