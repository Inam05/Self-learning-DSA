#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {25, 58, 24, 5, 55, 2, 45, 27, 71};
    bubbleSort(arr);
    cout << "Bubble sort : ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}