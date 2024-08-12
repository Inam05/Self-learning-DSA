/*
Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k.
Let's suppose we have an array arr = [2, 4, 6, 9], so if we rotate it by 2 times so that it will look like this:
After 1st Rotation : [9, 2, 4, 6]
After 2nd Rotation : [6, 9, 2, 4]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &arr) {
        int low = 0;
        int high = arr.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Check if mid is the smallest element
            if (mid > 0 && arr[mid] < arr[mid - 1]) {
                return mid;
            }
            // Check if mid is the largest element
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return 0; // Array is not rotated
    }
};

int main() {
    Solution sol;
    
    vector<int> arr1 = {2, 4, 6, 9}; // Example 1
    cout << "Number of rotations for arr1: " << sol.findKRotation(arr1) << endl;
    
    vector<int> arr2 = {15, 18, 2, 3, 6, 12}; // Example 2
    cout << "Number of rotations for arr2: " << sol.findKRotation(arr2) << endl;
    
    vector<int> arr3 = {7, 9, 11, 12, 5}; // Example 3
    cout << "Number of rotations for arr3: " << sol.findKRotation(arr3) << endl;
    
    return 0;
}

