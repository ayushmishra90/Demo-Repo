#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ;

     class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashmap;
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hashmap.count(complement)) {
            result.push_back(hashmap[complement]);
            result.push_back(i);
            return result;
        }
        hashmap[nums[i]] = i;
    }
    
    return result;
}
};
    
int main()
{
    Solution o;
    vector<int> n={3,2,4};
    vector<int> w;
    
    w =o.twoSum(n,6);
     cout<<w[0]<<" "<<w[1]<< " ";
return 0;
}