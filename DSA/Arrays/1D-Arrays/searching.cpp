/*
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

// Binary Search through recursion method
#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int A[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

// Recursive Binary Search Function
int binarySearch(int A[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;

        if (A[mid] == key)
        {
            return mid;
        }
        else if (A[mid] > key)
        {
            return binarySearch(A, low, mid - 1, key);
        }
        else
        {
            return binarySearch(A, mid + 1, high, key);
        }
    }
    else
    {
        return -1;
    }

}

int main()
{
    int x;
    cout << "Enter the size of the Array: ";
    cin >> x;

    int A[x];
    cout << "_________________________________________" << endl;

    for (int i = 0; i < x; i++)
    {
        cout << "Enter Number: ";
        cin >> A[i];
    }

    // Sort the array
    bubbleSort(A, x);

    cout << "Sorted Array is: ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    // Perform binary search
    int result = binarySearch(A, 0, x - 1, key);

    if (result == -1)
    {
        cout << "Not found." << endl;
    }
    else
    {
        cout << "Your element is found at index: " << result << endl;
    }

    return 0;
}
