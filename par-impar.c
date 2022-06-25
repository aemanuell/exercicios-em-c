#include<stdio.h>
int main()
{
   int val, i;
   scanf("%d", &val);
   for (i = 0; i < val; i++){
        int x;
        scanf("%d", &x);
        if (x == 0){
            printf("NULL\n");
        }
        if ((x > 0) && (x%2 == 0)){
            printf("EVEN POSITIVE\n");
        }
        if ((x > 0) && (x%2 == 1)){
            printf("ODD POSITIVE\n");
        }
        if ((x < 0) && (x%2 == 0)){
            printf("EVEN NEGATIVE\n");
        }
        if ((x < 0) && (x%2 == -1)){
            printf("ODD NEGATIVE\n");
        }
   }
    return(0);
}