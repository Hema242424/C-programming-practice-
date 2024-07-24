
#include<stdio.h>
int main(){
int n, fac=1;
printf ("enter number for factorial\n");
scanf("%d", &n);

if(n==0 && n==1){ 
fac=1;
}
else{
int i=2;
while(i<=n){
    fac=fac*i;
    i++;
}
printf("fac= %d",fac );

}
}
