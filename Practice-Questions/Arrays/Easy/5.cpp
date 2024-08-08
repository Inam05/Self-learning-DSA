/*
Given an array of N integers where each value represents the number of chocolates in a packet.
Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:
Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to
the students is minimum.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int findMinDifference(vector<int> &packets, int m)
{
    int n = packets.size();
    if (m > n)
    {
        return -1;
    }
    sort(packets.begin(), packets.end());
    int minDiff = INT_MAX;
    for (int i = 0; i + m - 1 < n; ++i)
    {
        int diff = packets[i + m - 1] - packets[i];
        if (diff < minDiff)
        {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main()
{
    vector<int> packets = {5, 4, 8, 3, 2, 6, 1};
    int m = 3;
    int result = -1;
    result = findMinDifference(packets, m);
    if (result == -1)
    {
        cout << "Not enough packets to distribute" << endl;
    }
    else
    {
        cout << "Minimum difference is " << result << endl;
    }

    return 0;
}
