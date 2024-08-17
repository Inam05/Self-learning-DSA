/*
Given two sorted arrays, merge them into a single sorted array. The solution should work efficiently even if the arrays are large.
*/

#include <iostream>
#include <vector>
using namespace std;

class ArrayMerger
{
public:
    ArrayMerger(const vector<int> &arr1, const vector<int> &arr2)
        : arr1(arr1), arr2(arr2) {}

    vector<int> merge()
    {
        vector<int> merged;
        int i = 0, j = 0;

        while (i < arr1.size() && j < arr2.size())
        {
            if (arr1[i] < arr2[j])
            {
                merged.push_back(arr1[i++]);
            }
            else
            {
                merged.push_back(arr2[j++]);
            }
        }

        while (i < arr1.size())
        {
            merged.push_back(arr1[i++]);
        }

        while (j < arr2.size())
        {
            merged.push_back(arr2[j++]);
        }

        return merged;
    }

    void printMergedArray() const
    {
        vector<int> mergedArray = merge();
        for (int num : mergedArray)
        {
            cout << num << " ";
        }
        cout << endl;
    }

private:
    vector<int> arr1;
    vector<int> arr2;
};

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    ArrayMerger merger(arr1, arr2);
    cout << "Merged array: ";
    merger.printMergedArray();
    return 0;
}
