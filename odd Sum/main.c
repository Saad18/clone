#include <stdio.h>

int main()
{
    int a,b,i,t,j,sum;
    while(scanf("%d\n",&t)==1)
     {
      for(i=1;i<=t;i++)
      {
          scanf("%d%d",&a,&b);
          sum=0;
          for(j=a;j<=b;j++)
          {
              if(j%2!=0)
                 sum+=j;
            }
        printf("case %d: %d\n",i,sum);
      }
    }
    return 0;
}
