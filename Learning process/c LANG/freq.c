#include <stdio.h>

int main()
{
    int num, a = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n = num;
    while (n > 0)
    {
        n /= 10;
        a++;
    }
    int ar[a];
    for (int i = a-1; i >= 0; i--)
    {
        ar[i] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    int d;
    for (int j = 0; j < a; j++)
    {
        d = 0;
        for (int i = 0; i < a; i++)
        {
            if (ar[i] == ar[j])
            {
                d++;
            }
        }
        int f=d;
        for (int h = j + 1; h < a; h++)
        {
                 
            if (ar[j] == ar[h])
            {
                f--;
                break;
               
            }
        }
        if (f==d)
        {
             printf("%d  %d\n", ar[j], d);
        }
        
    }
    return 0;
}
