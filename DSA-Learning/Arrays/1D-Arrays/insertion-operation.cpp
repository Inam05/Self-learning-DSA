#include <iostream>
using namespace std;

int main()
{
    // Insertion Operation in an array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n >= 20)
    {
        cout << "Size exceeds maximum limit of 20" << endl;
        return 1;
    }

    int arr[20];
    cout << "Enter the elements of the array: ";
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /*
    // Insertion at beginning
    cout << "Insertion at beginning: " << endl;
    int x;
    cout << "Enter the element to be inserted: ";
    cin >> x;

    // Shift elements to the right
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    */

    /*
    // Insertion at specific position
    int pos, x;
    cout << "Enter the insertion location (1-based index): ";
    cin >> pos;

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position!" << endl;
        return 1;
    }

    cout << "Enter the element to be inserted: ";
    cin >> x;

    // Shift elements to the right to make space for the new element
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    */

    // Insertion at end
    int x;
    cout << "Enter the element to be inserted: ";
    cin >> x;
    arr[i] = x;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
