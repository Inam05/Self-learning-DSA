#include <iostream>
using namespace std;
int main ()
{
    // Deletion element in an array

    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /*
    // Deletion at beginning
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    */

    /*
    // Deletion at the end of an array
    n--;
    cout << "Array after deletion : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    */

    
    return 0;
}