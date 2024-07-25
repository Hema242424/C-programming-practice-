#include<stdio.h>
int main(){
int n, s, a,g;
s=g=0;
printf("enter how many numbers do you want to enter");
scanf("%d", &n);

printf("enter numbers---");

for(int i=1;i<=n;i++){
scanf("%d", &a);
if(a<s){
s=a;
}
if(a>g){
g=a;
}
}
printf("\nsmallest= %d", s);
printf("\ngreatest= %d", g);

}
