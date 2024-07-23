#include<stdio.h>
int main(){
printf("enter purchase amount");
int y;
float t;
scanf("%d",&y);
if (y<1000){
printf("payable amount = %d", y);
}
else if(y>=1000&&y<=1500){
t=y*0.90;.
printf("payable amount= %f", t);
}
else{
t=y*0.85;
printf("payable amount = %f", t);
}
}
