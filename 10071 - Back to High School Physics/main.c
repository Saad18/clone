#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,v,t;

    while(scanf("%d %d",&v,&t)==2){

        if(v >= -100 && v<=100 && t>=0 && t <= 200 ){

            s=v*t*2;
        }
        printf("%d\n",s);
    }

    return 0;
}
