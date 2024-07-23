#include <stdio.h> 
int main() { 
  int n, s=0; printf("give any no\n"); 
  scanf("%d", &n); 
  
  printf("--start searching ----\n"); 
  for(int i=1;i<=50;i++){ 
    if (i ==n){ 
      s=1; 
      break; 
    } 
  } 
  if(s==1){ 
    printf("num found"); 
  } else { 
    printf("num not found"); 
  } 
  return 0; 
}
