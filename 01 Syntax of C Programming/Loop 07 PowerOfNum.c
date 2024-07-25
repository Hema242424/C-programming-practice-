#include<stdio.h>
int main(){
int f, s,p=1;

printf ("enter frist number  \n");
scanf("%d", &f);
printf ("enter second number  \n");
scanf("%d", &s);
if(f>0)
{
for(int i=f;i>=1;i--){
p=p*s;
}
 
}


printf("\nfrist is the power of second . so value= %d", p);
}
