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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

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

    return 0;
}
