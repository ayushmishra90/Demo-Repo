#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int count(int arr[], int n, int x)
    {
        int g = -1, f = -1;
        int l = 0, h = n - 1;
        while (l <= h)
        {
            int m = l + (h - l) / 2; // To avoid potential integer overflow
            if (arr[m] < x)
            {
                l = m + 1;
            }
            else if (arr[m] > x)
            {
                h = m - 1;
            }
            else
            {
                g = m;
                h = m - 1;
            }
        }
        
        l = 0, h = n - 1; // Reset the pointers
        while (l <= h)
        {
            int m = l + (h - l) / 2; // To avoid potential integer overflow
            if (arr[m] < x)
            {
                l = m + 1;
            }
            else if (arr[m] > x)
            {
                h = m - 1;
            }
            else
            {
                f = m;
                l = m + 1;
            }
        }

        if (g == -1 && f == -1)
            return 0; // Element not found
        return f - g + 1; // Number of occurrences
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
