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

    // Deletion at a specific position
    int pos;
    cout << "Enter the position of the element to be deleted (1-based index): ";
    cin >> pos;

    if (pos < 1 || pos > n)
    {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}