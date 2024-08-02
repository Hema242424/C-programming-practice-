#include <stdio.h>
int digitSum();

int main(){
    digitSum();
}

digitSum(){
    int d;
    int sum=0;
    int temp;
    printf("enter a any numbers\n");
    scanf("%d", &d);
   
    while(temp!=0){
    temp=d%10;
    sum=sum+temp;
    d=d/10;
    }
    printf("sum of digit=%d", sum);
}
