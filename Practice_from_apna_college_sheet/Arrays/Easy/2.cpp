/* Given an array (or string), the task is to reverse the array/string. */

#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int reverse_array[size];
    // Copy elements to the temporary array in reverse order
    for (int i = 0; i < size; i++)
    {
        reverse_array[i] = arr[size - i - 1];
    }
    // Copy the reversed array back to the original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = reverse_array[i];
    }
}

int main ()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
