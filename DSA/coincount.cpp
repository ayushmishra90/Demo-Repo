//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long int count(int coins[], int N, int sum)
    {
       return countWaysToCutRope(sum,coins,N, 0);
      
    }
   int countWaysToCutRope(int totalLength, int lengths[], int numLengths, int currentIndex) {
    if (totalLength == 0) {
        return 1; // Base case: one way to have a rope of length 0
    }

    if (currentIndex >= numLengths) {
        return 0; // Base case: no more lengths to consider
    }

    int ways = 0;

    // Include the current length and move to the next length
    if (lengths[currentIndex] <= totalLength) {
        ways += countWaysToCutRope(totalLength - lengths[currentIndex], lengths, numLengths, currentIndex);
    }

    // Move to the next length without including the current one
    ways += countWaysToCutRope(totalLength, lengths, numLengths, currentIndex + 1);

    return ways;
}

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++)
            cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}

// } Driver Code Ends