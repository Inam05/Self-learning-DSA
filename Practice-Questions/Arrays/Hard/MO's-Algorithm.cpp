/*
Let us consider the following problem to understand MO’s Algorithm.
We are given an array and a set of query ranges, we are required to find the sum of every query range.

Example: 

Input:  arr[]   = {1, 1, 2, 1, 3, 4, 5, 2, 8};
        query[] = [0, 4], [1, 3] [2, 4]
Output: Sum of arr[] elements in range [0, 4] is 8
        Sum of arr[] elements in range [1, 3] is 4  
        Sum of arr[] elements in range [2, 4] is 6
*/

#include <iostream>
#include <vector>
using namespace std;

class RangeQuerySum {
public:
    RangeQuerySum(int a[], int n, const vector<pair<int, int>>& queries)
        : arr(a), size(n), queries(queries) {}

    void printQuerySums() {
        for (const auto& query : queries) {
            int L = query.first, R = query.second;
            int sum = 0;
            for (int j = L; j <= R; j++) {
                sum += arr[j];
            }
            cout << "Sum of [" << L << ", " << R << "] is " << sum << endl;
        }
    }

private:
    int* arr;
    int size;
    vector<pair<int, int>> queries;
};

int main() {
    int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);

    vector<pair<int, int>> queries = {{0, 4}, {1, 3}, {2, 4}};

    RangeQuerySum rangeQuerySum(a, n, queries);
    rangeQuerySum.printQuerySums();

    return 0;
}

