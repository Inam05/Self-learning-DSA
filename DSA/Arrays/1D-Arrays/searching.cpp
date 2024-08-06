#include <iostream>
using namespace std;
int main()
{
    /*
    // Linear Searching
    int x;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    int n;
    cout << "Enter your Number to find : ";
    cin >> n;
    for (int i = 0; i <=x; i++)
    {
        if (n == A[i])
        {
            cout << "Your Number is at the index : " << i;
            return 0;
        }
    }
    cout << "Your number is not found";
    */

    /*
    // Binary Searching
    int x;
    cout << "Enter the size and elements of an Array : ";
    cin >> x;
    cout << "_________________________________________" << endl;
    int A[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number : ";
        cin >> A[i];
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout << "Sorted Array is: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    int mid, key, loc, low, high;
    cout << "Enter the element you want to search: ";
    cin >> key;
    loc = -1;
    low = 0;
    high = x - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            loc = mid;
            break;
        }
        else
        {
            if (key < A[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    if (loc == -1)
    {
        cout << "Not found.";
    }
    else
    {
        cout << "Your element is founded at the index : " << loc;
    }
    */
    
    return 0;
}