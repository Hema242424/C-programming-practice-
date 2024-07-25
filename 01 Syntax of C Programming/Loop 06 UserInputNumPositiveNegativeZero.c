#include<stdio.h>
int main(){
int a, p,n,z, s;
p=n=z=0;
printf ("give count how many  numbers you wnat enter\n");
scanf("%d", &s);

printf("Entee number ---\n");
for(int i=1;i<=s;i++){
scanf("%d",&a);
if(a<0){
n++;
}
if(a>0){
p++;
}
if(a==0){
z++;
}

}
printf("count of negatives number %d", n);
printf("\ncount of positive number %d", p);
printf("\ncount of zero %d", z);
}
