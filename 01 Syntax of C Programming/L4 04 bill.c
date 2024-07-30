#include <stdio.h>

int main()
{
    int custid,unit;
    float bill;
    char name[20];
   
    printf("Enter custer id\n");
    scanf("%d", &custid);
    printf("enter name\n");
    scanf("%s",name);
    printf("enter unit\n");
    scanf("%d", &unit);
   
    if(unit<200){
        bill=unit*1.12;
    }
    else if(unit>=200 && unit<400 ){
        bill=unit*1.50;
    }
    else if(unit>=400 && unit<600){
        bill=unit*1.90;
    }
    else(unit>=600);{
        bill=unit*2.00;
    }
   
    if(bill<100){
        bill=100;
    }
    else{
        bill=bill*1.15;
    }
    printf("bill=%0.2f",bill);

    return 0;
}
