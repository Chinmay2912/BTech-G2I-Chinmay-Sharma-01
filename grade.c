#include <stdio.h>
int main(){
    double a ,b ,c ,d ,e ;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    
    double sum = a+b+c+d+e;
    double per = sum/5;
    printf("your percentage is%lf",per);
    if(per>=90){
        printf("your grade is A");
    
    }else if (per>=80){
        printf("your grade is B");
    }else if (per>=70){
        printf("your grade is C");
    }else if (per>=60){
        printf("your grade is D");
    }else if (per>=50){
        printf("your grade is E");
    }else {
        printf("your grade is F");
    }
    return 0;
}