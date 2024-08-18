/*
You have given an array which contain 1 to n element, your task is to sort this array in an efficient way and without replace
with 1 to n numbers.
Examples :
Input : arr[] = {10, 7, 9, 2, 8, 3, 5, 4, 6, 1};
Output : 1 2 3 4 5 6 7 8 9 10
Native approach :
Sort this array with the use of any type of sorting method(or use inbuilt sorting method) it takes O(nlogn) minimum time.
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class ArrayProcessor
{
public:
    ArrayProcessor(vector<int> &arr) : arr(arr) {}

    void sortArray()
    {
        sort(arr.begin(), arr.end());
    }

    void printArray()
    {
        for (int num : arr)
        {
            cout << num << " ";
        }
        cout << endl;
    }

private:
    vector<int> &arr;
};

int main()
{
    vector<int> arr = {3, 1, 4, 2, 5};

    ArrayProcessor arrayProcessor(arr);
    arrayProcessor.sortArray();

    cout << "Sorted array is : ";
    arrayProcessor.printArray();

    return 0;
}
