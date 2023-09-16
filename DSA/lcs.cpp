//{ Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
public:
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        int x = 0;
        
        for (int k = 0; k < n; k++)
        {
            int l = 0;
            int g = 0;
            for (int i = k; i < n; i++)
            {
                for (int j = l; j < m; j++)
                {
                    if (s1[i] == s2[j])
                    {
                        l = j;
                        g++;
                        break;
                        /* code */
                    }

                    /* code */
                }
            }
            if (g > x)
            {
                x = g; /* code */
            }
        }
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m; // Take size of both the strings as input
        string s1, s2;
        cin >> s1 >> s2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}
