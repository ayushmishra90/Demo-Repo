//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
          int k = str.length();
    for (int i = 0; i < k / 2; i++)
    {
        char g = str[i];  // Corrected
        str[i] = str[k - 1 - i];  // Corrected swapping logic
        str[k - 1 - i] = g;  // Corrected index for swapping
    }
    return str;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends