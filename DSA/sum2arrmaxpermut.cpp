//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool isPossible(long long a[], long long b[], int n, long long k)
    {
        // Your code goes here
        mergesort(a, 0, n);
        dmergesort(b, 0, n);
        int u = 0;
        while (n--)
        {
            if ((a[u] + b[u]) < k)
            {
                return false;
            }
            u++;
        }
        return true;
    }
    void mergesort(long long a[], int l, int r)
    {
        if (r > l)
        {
            int m = l + (r - l) / 2;
            mergesort(a, l, m);
            mergesort(a, m + 1, r);
            merge(a, l, m, r);
        }
    }
    void merge(long long a[], int l, int m, int h)
    {
        int n1 = m - l + 1, n2 = h - m;
        int left[n1], right[n2];
        for (int i = 0; i < n1; i++)
        {
            left[i] = a[l + i];
        }
        for (int j = 0; j < n2; j++)
        {
            right[j] = a[m + 1 + j];
        }
        int i, j, k = 0;
        i = j = 0;
        while (i < n1 && j < n2)
        {
            if (left[i] <= right[j])
            {
                a[k] = left[i];
                i++;
                k++;
            }
            else
            {
                a[k] = right[j];
                j++;
                k++;
            }
        }
        while (i < n1)
        {
            a[k] = left[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }

    void dmergesort(long long a[], int l, int r)
    {
        if (r > l)
        {
            int m = l + (r - l) / 2;
            dmergesort(a, l, m);
            dmergesort(a, m + 1, r);
            dmerge(a, l, m, r);
        }
    }
    void dmerge(long long a[], int l, int m, int h)
    {
        int n1 = m - l + 1, n2 = h - m;
        int left[n1], right[n2];
        for (int i = 0; i < n1; i++)
        {
            left[i] = a[l + i];
        }
        for (int j = 0; j < n2; j++)
        {
            right[j] = a[m + 1 + j];
        }
        int i, j, k = 0;
        i = j = 0;
        while (i < n1 && j < n2)
        {
            if (left[i] >= right[j])
            {
                a[k] = left[i];
                i++;
                k++;
            }
            else
            {
                a[k] = right[j];
                j++;
                k++;
            }
        }
        while (i < n1)
        {
            a[k] = left[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.isPossible(a, b, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends