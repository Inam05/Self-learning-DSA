/*
Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.
 */

// Algorithm
/*
Step 1: Write functions to find the minimum (setmini) and maximum (setmaxi) values in the array.
Step 2: In the setmini function:
Initialize a variable (mini) to INT_MAX.
Iterate through the array, and if an element is smaller than the current mini, update mini to that element.
Return the final value of mini.
Step 3: In the setmaxi function:
Initialize a variable (maxi) to INT_MIN.
Iterate through the array, and if an element is larger than the current maxi, update maxi to that element.
Return the final value of maxi.
Step 4: In the main function:
Declare an array and its size.
Print the result ,Call the setminimum and setmaxi functions to find the minimum and maximum values.
*/

// code

#include <iostream>
#include <limits.h>
using namespace std;

int setmini(int A[], int N)
{
    int mini = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < mini)
        {
            mini = A[i];
        }
    }
    return mini;
}
int setmaxi(int A[], int N)
{
    int maxi = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        if (A[i] > maxi)
        {
            maxi = A[i];
        }
    }
    return maxi;
}
int main()
{
    int A[] = {4, 9, 6, 5, 2, 3};
    int N = 6;
    cout << "Minimum element is: " << setmini(A, N) << endl;
    cout << "Miximum  element is: " << setmaxi(A, N) << endl;
}
