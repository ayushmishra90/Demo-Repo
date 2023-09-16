#include <stdio.h>
int main()
{
    int n;
    printf("no. of elements :");
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element no. %d : ", i + 1);
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        int s=ar[i];
       ar[i]=ar[n-1-i];
       ar[n-1-i]=s;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}