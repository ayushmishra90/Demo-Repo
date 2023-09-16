#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> subarraySum(vector<int> &arr, int arrSize, long long targetSum)
    {
        vector<int> a;
        a.push_back(-1);
        // Your code here

        int sum = 0, i = 0;
        for (int j = 0; j < arrSize; j++)
        {
            if (sum < targetSum)
            {
                sum = sum + arr[j];
            }

            else if (sum > targetSum)
            {
                sum = sum - arr[i];
                i++;
            }
            else if (sum == targetSum)
            {

                a[0] = i + 1;
                a.push_back(j + 1);
                return a;
            }
        }
         return a;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
