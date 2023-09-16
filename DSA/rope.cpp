#include <iostream>
using namespace std;
int rpi(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int res = max(max(rpi(n - x, x, y, z), rpi(n - y, x, y, z)) ,rpi(n - z, x, y, z));
    if (res == -1)
    {
        /* code */ return -1;
    }
    return (res + 1);
}
int main()
{
    cout << rpi(10, 2, 4, 5);
    return 0;
}