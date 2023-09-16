#include <stdio.h>
int main()
{
    int fir = 0, sec = 0, s, f;
    printf("enter the no of no \n");
    scanf("%d", &s);

   
    {
        
        scanf("%d%d", &fir,&sec);
        if (sec>fir)
        {
            int c=fir;
            fir=sec;
            sec=c;
        }
        
        
        // have to run once
    }
   while(s>2)
    {
        scanf("%d",&f);
        if (f > fir)
        {
            sec = fir;
            fir = f;
        }

        else if (f < fir && f > sec)
        {
            sec = f;
        }
        s--;
        
    }

    printf("%d", sec);

    return 0;
}