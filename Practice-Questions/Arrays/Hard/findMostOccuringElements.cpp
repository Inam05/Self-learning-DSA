/*
Given an array of N numbers and a positive integer K. The problem is to find K numbers with the most occurrences, i.e., the top
K numbers having the maximum frequency. If two numbers have the same frequency then the number with a larger value should
be given preference. The numbers should be displayed in decreasing order of their frequencies. It is assumed that the
array consists of at least K numbers.

Examples:
Input: arr[] = {3, 1, 4, 4, 5, 2, 6, 1}, K = 2
Output: 4 1
Explanation:
Frequency of 4 = 2, Frequency of 1 = 2
These two have the maximum frequency and 4 is larger than 1.
*/

#include <iostream>
using namespace std;

class FrequencyFinder
{
private:
    int *arr;
    int N;
    int K;

public:
    FrequencyFinder(int array[], int size, int k)
        : arr(array), N(size), K(k) {}

    void print_N_mostFrequentNumber()
    {
        unordered_map<int, int> elementCount;
        for (int i = 0; i < N; i++)
        {
            elementCount[arr[i]]++;
        }

        vector<vector<int>> frequency(N + 1);

        for (auto element : elementCount)
        {
            frequency[element.second].push_back(element.first);
        }

        int count = 0;
        cout << K << " numbers with most occurrences are:\n";

        for (int i = frequency.size() - 1; i >= 0; i--)
        {
            if (frequency[i].size() > 1)
            {
                sort(frequency[i].begin(), frequency[i].end(), greater<int>());
            }

            for (auto element : frequency[i])
            {
                count++;
                cout << element << " ";

                if (count >= K)
                    return;
            }
        }
    }
};

int main()
{
    int arr[] = {3, 1, 4, 4, 5, 2, 6, 1};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 2;

    FrequencyFinder finder(arr, N, K);
    finder.print_N_mostFrequentNumber();

    return 0;
}
