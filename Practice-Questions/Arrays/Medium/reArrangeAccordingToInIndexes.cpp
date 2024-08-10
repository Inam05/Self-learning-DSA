/*
Given two integer arrays of the same size, “arr[]” and “index[]”, reorder elements in “arr[]” according to the given
index array.
Example:
Input:
arr[]   = [10, 11, 12];
index[] = [1, 0, 2];
Output:
arr[]   = [11, 10, 12]
index[] = [0,  1,  2]
*/

// sort an array according to given indexes
#include <iostream>
using namespace std;

class ArrayReorder
{
private:
    int *arr;
    int *index;
    int n;

public:
    ArrayReorder(int arr[], int index[], int size) : arr(arr), index(index), n(size) {}

    void reorder()
    {
        for (int i = 0; i < n; i++)
        {
            while (index[i] != i)
            {
                int oldTargetI = index[index[i]];
                int oldTargetE = arr[index[i]];
                arr[index[i]] = arr[i];
                index[index[i]] = index[i];
                index[i] = oldTargetI;
                arr[i] = oldTargetE;
            }
        }
    }

    void printArray()
    {
        cout << "Reordered array is: \n";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    int arr[] = {50, 40, 70, 60, 90};
    int index[] = {3, 0, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    ArrayReorder reorderer(arr, index, n);
    reorderer.reorder();
    reorderer.printArray();
    return 0;
}
