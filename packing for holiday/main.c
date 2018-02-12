#include <stdio.h>

int main()
{
    int t,w,h,l,i;

    while(scanf("%d",&t)==1){

        for(i=1; i<=t; i++){

        scanf("%d %d %d",&l,&h,&w);

        if(l <= 20 && h <=20 && w <= 20)

            printf("case%d:good\n",i);

        else

            printf("case%d:bad\n",i);

         }
    }

    return 0;
}
