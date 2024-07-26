#include<stdio.h>
int main(){
int x,y;
printf("enter x & y  value\n");
scanf("%d%d", &x,&y);

if(x>0&&y>0){
printf("frist quadrant");
}
else if(x<0&&y>0){
printf("second quadrant");
}
else if(x<0&&y<0){
printf("third quadrant");
}
else if(x>0&&y<0){
printf ("fourth quadrant");
}
else{
printf ("not in quadrant");

}
}
