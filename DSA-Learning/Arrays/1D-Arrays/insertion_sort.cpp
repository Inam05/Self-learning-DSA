#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j >=0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}
int main ()
{
    vector<int> arr = {44,15,35,12,74,1,5,58};
    insertionSort(arr);
    cout << "Insertion sort : ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}