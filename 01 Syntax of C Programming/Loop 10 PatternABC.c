#include<stdio.h>
int main(){
int n;
int c=65;
printf("enter how many row or colum do you want to enter");
scanf("%d", &n);

printf("---pattern---\n");

for(int i=0;i<n;i++){
for (int j=0;j<=i;j++){
printf("%c ", c);
}
c++;
printf("\n");

}

}
