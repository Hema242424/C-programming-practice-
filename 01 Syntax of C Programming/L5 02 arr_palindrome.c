#include <stdio.h>

int main()
{
    int a[5];
    int isPalindrom=1;
    printf("Enter 5 no \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<2;i++){
       
        if(a[i]!=a[4-i]){
            isPalindrom=0;
            break;
        }
       
       
    }
   
    if(isPalindrom){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
     
    return 0;
}
