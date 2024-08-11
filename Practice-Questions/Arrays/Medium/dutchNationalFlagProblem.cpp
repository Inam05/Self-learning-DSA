/*
Given an array A[] consisting of only 0s, 1s, and 2s. The task is to sort the array, i.e., put all 0s first, then all 1s and all 2s in last.
This problem is the same as the famous “Dutch National Flag problem”. The problem was proposed by Edsger Dijkstra. The problem is as follows:
Given N balls of colour red, white or blue arranged in a line in random order. You have to arrange all the balls such that the balls with the
same colours are adjacent with the order of the balls, with the order of the colours being red, white and blue (i.e., all red coloured balls
come first then the white coloured balls and then the blue coloured balls).

Examples:
Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}
Explanation: {0, 0, 1, 1, 2, 2} has all 0s first, then all 1s and all 2s in last.
*/

#include <iostream>
using namespace std;

class ArraySorter
{
private:
    int *arr;
    int n;

    void sort012()
    {
        int lo = 0;
        int hi = n - 1;
        int mid = 0;

        while (mid <= hi)
        {
            switch (arr[mid])
            {
            case 0:
                swap(arr[lo++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[hi--]);
                break;
            }
        }
    }

    void printArray() const
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

public:
    ArraySorter(int array[], int size) : arr(array), n(size) {}

    void sortAndPrint()
    {
        sort012();
        printArray();
    }
};

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    ArraySorter sorter(arr, n);
    sorter.sortAndPrint();

    return 0;
}
