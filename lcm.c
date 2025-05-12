#include <stdio.h>
#include <stdlib.h>
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
    int ans;
    bool test = true;
    if(a == 0){
        test = false;
        ans = b;
    }else if(b == 0){
        test = false;
        ans = a;
    }
    while(test){
        if(a % b == 0){
            ans = b;
            test = false;
        }else{  
            r=a%b;
            a = b;
            b = r;
        }
    }
    if(ans == 0){
        printf("The LCM is undefined");
    }else{
        ans = (abs(num1*num2))/(ans);
        printf("The LCM is %d",ans);
    }
    return 0;
}