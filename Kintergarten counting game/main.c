#include <stdio.h>
#include <string.h>

int main()
{
    int i , l, count;

    count = 0;

    char str[1000];

    while(gets(str)){

        l = strlen(str);

        for( i= 0; i < l; i++){

            if( (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') ){

                 count ++;        //it just count the first word of the string.then nested while loop terminate the string
                                    by increasing i++ 

              while( (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') ){


                i++;     //it terminate the string..then loop is terminate..and then again statrt the loop from the begening.
              }
          }

        }

        printf("%d\n", count);
    }

    return 0;
}
