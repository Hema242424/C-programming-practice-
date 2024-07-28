#include<stdio.h>
int main(){
int x,y,a,b,c,d;
printf("enter the value of a,b,c\n");
scanf("%d %d %d", &a,&b,&c);
d=b*b-4*a*c;
if(d<0){
printf ("d<0 no real no, it's imaginary" );

}
else if(d>0){
printf("it's 2 root value");
x=(-b+sqrt(d))/2*a;
y=(b+sqrt(d))/2*a;
printf("x=%d y=%d", x,y);

}
else{
printf("d==0 it has equal 0 and one real root");
printf("root value = %d", -b/2*a);
}
}
