#include <stdio.h>
int main()
{ 
  int n; 
  printf("give any no\n"); 
  scanf("%d", &n); 
  printf("----printf square of numbers---\n"); 
  for(int i=1;i<=n;i++)
  { 
    printf("square of %d = %d \n", i, i*i); 
  } 
  return 0;
}
