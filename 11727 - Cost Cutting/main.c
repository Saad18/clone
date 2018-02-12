#include <stdio.h>

int main()
{
    int T,a,b,j,c,ans;
     j = 1;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(b > a && a > c || b < a && a < c)  //here i compare  variable(a) with variable(b) &(c) by using first only (>) then (<) 
            ans = a;
        if(a > b && b > c || a < b && b < c)   // first use (>) or(<) but not use (>)&(<) mixed use.like: a>b && a<c 
            ans = b;
        if(a > c && c > b || a < c && c < b)
            ans = c;

        printf("Case %d: %d\n",j++,ans);
    }

    return 0;
}
