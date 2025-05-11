#include <stdio.h>
#include<stdbool.h>
int main(){
    printf("Num 1: ");
    int num1;
    scanf("%d",&num1);
    printf("Num 2: ");
    int num2;
    scanf("%d",&num2);
    int a = num1;
    int b = num2;
    int r;
    bool test = true;
    if(a == 0){
        test = false;
        printf("The GCD is ");
        printf("%d",b);
    }else if(b == 0){
        test = false;
        printf("The GCD is ");
        printf("%d",a);
    }
    while(test){
        if(a % b == 0){
            printf("The GCD is ");
            printf("%d",b);
            test = false;
        }else{  
            r=a%b;
            a = b;
            b = r;
        }
    }
    return 0;
}