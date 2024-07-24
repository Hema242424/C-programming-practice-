
#include<stdio.h>
int main(){
int n[20], count=0;
printf ("enter the weigh of 20 students ");
for(int i=1;i<=20;i++){
scanf("%d", &n[i]);
}
for(int i=1;i<=20;i++){
if(n[i]<50){
count++;
}
}
printf("the num of students whose wait is less than 50 - %d", count);

}
