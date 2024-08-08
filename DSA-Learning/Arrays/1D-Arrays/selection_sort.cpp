#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr)
{
    int n = arr.size();
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx],arr[i]);
    }
    
}
int main ()
{
    vector<int> arr = {23,34,56,67,12,54,11};
    selectionSort(arr);
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}