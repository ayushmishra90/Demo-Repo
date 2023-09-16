//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        for (int j = 0; j < nums.size(); j++)
        {
          
        
        for (int i = 0; i < nums.size(); i++)
        {
          if ( nums[i]==nums[j])
          {
            nums.erase(nums.begin()+i);
            nums.erase(nums.begin()+j);
          }
          
        }
        
        }
        if (nums[0]>nums[1])
        {
            int x=nums[0];
            nums[0]=nums[1];
            nums[1]=x;
        }
        
        return nums;
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends