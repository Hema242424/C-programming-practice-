#include <stdio.h> 
int main() { 
int s1,s2,s3; 
printf("enter three side value s1, s2 & s3\n"); 
scanf("%d %d %d", &s1,&s2,&s3); 
if(s1==s2 && s1==s3){ 
printf ("equitorial triangle"); 
} 
else if(s1==s2 || s2==s3 || s1==s3 ){ 
printf("isoscales triangle"); 
} 
else{ 
printf("scalene triangle"); 
} 
return 0; 
}
