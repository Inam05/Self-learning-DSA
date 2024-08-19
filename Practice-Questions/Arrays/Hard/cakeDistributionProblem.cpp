/*
Geek is organizing a birthday party, so his friends brought a cake for him. The cake consists of N chunks, whose individual sweetness
is represented by the sweetness array. Now at the time of distribution, Geek cuts the cake into K + 1 pieces to distribute among his K
friends. One piece he took for himself. Each piece consists of some consecutive chunks. He is very kind, so he left the piece with
minimum sweetness for him.
You need to find the maximum sweetness that the Geek can get if he distributes the cake optimally.

Example 1:
Input:
N  = 6, K = 2
sweetness[] = {6, 3, 2, 8, 7, 5}
Output:
9
Explanation:
Geek can divide the cake to [6, 3], [2, 8], [7, 5]
with sweetness level 9, 10 and 12 respectively.
*/

#include <iostream>
#include <vector>
#include <numeric> // for accumulate function
using namespace std;

class Solution
{
public:
    bool canDivide(const vector<int> &sweetness, int N, int K, int minSweetness)
    {
        int pieces = 0, currentSweetness = 0;

        for (int i = 0; i < N; i++)
        {
            currentSweetness += sweetness[i];

            // If the current piece's sweetness is at least minSweetness
            if (currentSweetness >= minSweetness)
            {
                pieces++;
                currentSweetness = 0;
            }

            // If we already have enough pieces
            if (pieces > K)
                return true;
        }

        return pieces > K; // Check if we could make more than K pieces
    }

    int maxSweetness(vector<int> &sweetness, int N, int K)
    {
        int low = *min_element(sweetness.begin(), sweetness.end());
        int high = accumulate(sweetness.begin(), sweetness.end(), 0);

        int result = low;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (canDivide(sweetness, N, K, mid))
            {
                result = mid; // If we can divide, try a larger sweetness
                low = mid + 1;
            }
            else
            {
                high = mid - 1; // Otherwise, reduce the search space
            }
        }

        return result;
    }
};

int main()
{
    Solution solution;

    vector<int> sweetness = {6, 3, 2, 8, 7, 5};
    int N = sweetness.size();
    int K = 2;

    int result = solution.maxSweetness(sweetness, N, K);
    cout << "Maximum sweetness Geek can get: " << result << endl;

    return 0;
}
