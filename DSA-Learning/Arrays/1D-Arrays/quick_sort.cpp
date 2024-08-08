#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
            i++;
        swap(arr[i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
int main()
{
    vector<int> arr = {64, 25, 12, 22, 11, 27, 78, 101};
    quickSort(arr, 0, arr.size() - 1);
    cout << "Quick Sort: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}