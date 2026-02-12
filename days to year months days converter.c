#include <stdio.h>
int main(){
    int a ;
    printf("enter number of days\n");
    scanf("%d",&a);
    int years = a/365;
    int b = a%365;
    int months = b/30;
    int days = b%30;
    printf("no of years%d",years);
    printf("\nno of months%d",months);
    printf("\nno of days%d",days);
    return 0;
}