/*
Given an array arr, and an integer k, find the number of pairs of elements in the array whose sum is k.

Example:
Input: k = 6, arr[] = [1, 5, 7, 1]
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int getPairsCount(const vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        int count = 0;
        
        for (int num : arr) {
            int complement = k - num;
            
            if (freq.find(complement) != freq.end()) {
                count += freq[complement];
            }
            
            freq[num]++;
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    
    vector<int> arr1 = {1, 5, 7, 1};
    int k1 = 6;
    cout << "Number of pairs for arr1: " << sol.getPairsCount(arr1, k1) << endl;
    
    vector<int> arr2 = {1, 2, 3, 4, 3, 2, 1};
    int k2 = 4;
    cout << "Number of pairs for arr2: " << sol.getPairsCount(arr2, k2) << endl;
    
    vector<int> arr3 = {1, 1, 1, 1};
    int k3 = 2;
    cout << "Number of pairs for arr3: " << sol.getPairsCount(arr3, k3) << endl;
    
    return 0;
}