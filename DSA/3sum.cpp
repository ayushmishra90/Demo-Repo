#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> p;
        int u = 0;
        int l = 0;
        
    //    && j < (nums.size() - 2)&&l < nums.size() - 2
            int i = l + 1;
            int j = i + 1;
            while (l < (nums.size() - 2) )
            {
                 
                if ((nums[i] + nums[j] + nums[l]) == 0)
                {
                    p[u].push_back(nums[i]);
                    p[u].push_back(nums[j]);
                    p[u].push_back(nums[l]);
                    u++;
                    l++;
                }
                else
                {
                    if (j != nums.size() - 1)
                    {
                        j++;
                    }
                    else
                    {
                         if (i != nums.size() - 2){
                        i++;
                        j = i + 1;}
                        else {
                            l++;
                            i=l+1;
                            j=l+2;
                        }
                    }
                }
            
        }
        return p;
    }
};

int main()
{

    return 0;
}