#include <stdio.h>
int calulator(int a, int b){
    printf("sum=%d\n",a+b);
    printf("substraction=%d\n",a-b);
    printf("devide=%d\n",a/b);
    printf("multiplication=%d\n",a*b);
   
}

int main()
{
    int x,y;
    printf("enter two value ");
    scanf("%d %d", &x,&y);
    calulator(x,y);
   

    return 0;
}
