#include<stdio.h>
int main()
{
    char c[1000];
    int count,nc,i;
    count=0;nc=1;
    while((gets(c)))
    {
        for(i=0;c[i];i++)
        {

            if(  ( (c[i]>64 && c[i]<91) || (c[i]>96 && c[i]<123) )  )
            {
                if(nc==1)
                {
                    count++;
                    nc=0;
                }
            }
            else
                nc=1;
        }
        printf("%d\n",count);
        count=0;nc=1;
    }
    return 0;
}
