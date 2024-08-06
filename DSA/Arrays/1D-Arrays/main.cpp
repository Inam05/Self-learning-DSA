#include <iostream>
using namespace std;

int main()
{
    // Method 1
    int marks_[5] = {1, 2, 4, 5}; // Fixed size array with some elements initialized

    // Method 2
    int marks_1[] = {1, 2, 4, 5}; // Size determined by the number of initializers

    // Method 3
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Ensure the size does not exceed the fixed size (e.g., 100)
    const int MAX_SIZE = 100;
    if (n > MAX_SIZE)
    {
        cout << "Size exceeds maximum allowed size of " << MAX_SIZE << ". Setting size to " << MAX_SIZE << "." << endl;
        n = MAX_SIZE;
    }

    int a[MAX_SIZE]; // Use a fixed-size array with a maximum limit

    // Taking input for the array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> a[i];
    }

    // Method 4
    int marks_2[4];
    marks_2[0] = 1;
    marks_2[1] = 2;
    marks_2[2] = 4;
    marks_2[3] = 5;

    // Accessing elements of the array
    int marks[5] = {1, 2, 4, 5};
    cout << "The element at index 0 is " << marks[0] << endl;

    // Array Operations
    /*
    1- Traversal  = visiting every element once in an array
    2- Insertion  = include some other element in an array (at beginning , at the end and at the given index)
    3- Deletion   = Delete a desire element and re-arrang it again (at beginning , at the end and at the given index)
    4- Searching  = Search an element at any index
    5- Sorting    = Descending or Ascending
    */
    
}
