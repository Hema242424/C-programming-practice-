#include <stdio.h>

int main()
{
    printf("enter 10 no\n");
    int a[10], max, min;
    max=a[0], min=a[0];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
   
    printf("enter no is this:- \n");
    for(int i=0;i<10;i++){
        printf("%d\n", a[i]);
        if(a[i]>=max){
            max=a[i];
        }
        if(a[i]<=min){
            min=a[i];
        }
       
    }
   
    printf("max value= %d \n", max);
    printf("min value= %d \n", min);
   
   

    return 0;
}
