//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
   
int longestKSubstr(string s, int k)
{
    // your code here
    int j = k;
    int i = 0;
    int x = -1;
    if (k > s.size())
    {
        return -1;
    }

    while (j<=s.size())
    {

            std::string subString = s.substr(i, j);
            std::set<char> uniqueChars; // or std::unordered_set<char> for faster lookup

            for (char c : subString)
            {
                uniqueChars.insert(c);
            }
            
            if (uniqueChars.size() < k)
            {
                // x = subString.size();
                j++;
            }
            else if (uniqueChars.size() == k)
            {
                int h=subString.size();
                
                x = max(h,x);
                j++;
            }
            else if (uniqueChars.size() > k)
            {
                while (uniqueChars.size() > k)
                {
                    i++;;
                }
                
                
            }
        
    }
   
    return x;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends

