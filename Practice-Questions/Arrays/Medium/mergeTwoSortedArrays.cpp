/*
We are given two sorted arrays. We need to merge these two arrays such that the initial numbers (after complete sorting)
are in the first array and the remaining numbers are in the second array

Examples:
Input: ar1[] = {10}, ar2[] = {2, 3}
Output: ar1[] = {2}, ar2[] = {3, 10}
*/

#include <bits/stdc++.h>
using namespace std;

class ArrayMerger
{
private:
    int *ar1;
    int *ar2;
    int m;
    int n;

public:
    ArrayMerger(int array1[], int array2[], int size1, int size2)
        : ar1(array1), ar2(array2), m(size1), n(size2) {}

    void mergeAndPrint()
    {
        merge();

        cout << "After Merging \nFirst Array: ";
        for (int i = 0; i < m; i++)
            cout << ar1[i] << " ";
        cout << "\nSecond Array: ";
        for (int i = 0; i < n; i++)
            cout << ar2[i] << " ";
        cout << endl;
    }

    void merge()
    {
        for (int i = n - 1; i >= 0; i--)
        {
            int j, last = ar1[m - 1];
            for (j = m - 2; j >= 0 && ar1[j] > ar2[i]; j--)
                ar1[j + 1] = ar1[j];

            if (last > ar2[i])
            {
                ar1[j + 1] = ar2[i];
                ar2[i] = last;
            }
        }
    }
};

int main()
{
    int ar1[] = {1, 5, 9, 10, 15, 20};
    int ar2[] = {2, 3, 8, 13};
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);

    ArrayMerger merger(ar1, ar2, m, n);
    merger.mergeAndPrint();

    return 0;
}
