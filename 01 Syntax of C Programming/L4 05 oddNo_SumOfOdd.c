#include <stdio.h>

int main()

{
    int sum=0;
   printf("odd no from 0 to 100\n");
   for(int i=1;i<=100;i++){
       if(i%2!=0)
       printf("%d\n", i);
       sum=sum+i;
       
   }
    printf("sum of odd no= %d", sum);
   
    return 0;
}
