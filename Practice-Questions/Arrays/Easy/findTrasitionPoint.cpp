/*
Given a sorted array containing only 0s and 1s, find the transition point, i.e., the first index where 1 was observed, 
and before that, only 0 was observed.

Example 1:
Input:
N = 5
arr[] = {0,0,0,1,1}
Output: 3
Explanation: index 3 is the transition 
point where 1 begins.
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int transitionPoint(int arr[], int n) {
        int low = 0;
        int high = n - 1;
        int result = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == 1) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    
    int arr1[] = {0, 0, 0, 1, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Transition point for arr1: " << sol.transitionPoint(arr1, n1) << endl;
    
    int arr2[] = {0, 0, 0, 0, 0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Transition point for arr2: " << sol.transitionPoint(arr2, n2) << endl;
    
    int arr3[] = {1, 1, 1, 1, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Transition point for arr3: " << sol.transitionPoint(arr3, n3) << endl;
    
    return 0;
}

