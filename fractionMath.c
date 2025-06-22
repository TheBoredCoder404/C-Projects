#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int da;
    printf("What is the numerator of first fraction?\n");
    int n1;
    scanf("%d",&n1);
    printf("What is the denominator of first fraction?\n");
    int d1;
    scanf("%d",&d1);
    printf("What is the numerator of second fraction?\n");
    int n2;
    scanf("%d",&n2);
    printf("What is the denominator of second fraction?\n");
    int d2;
    scanf("%d",&d2);
    printf("Which operation would you like to perform? \n");
    printf("Addition(1) - Subtraction(2) - Multiplication(3) - Division(4)\n");
    int choice;
    scanf("%d",&choice);
    int lcm;
    if(choice == 1 || choice == 2){
        int t1;
        int t2;
        int a = d1;
        int b = d2;
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
        ans = (abs(d1*d2))/(ans);
        t1 = ans / d1;
        t2 = ans / d2;
        n1 = n1 * t1;
        d1 = d1 * t1;
        n2 = n2 * t2;
        d2 = d2 * t2;
        da = ans;
    }
    int na;
    int whole;
    int nf;
    int temp;
    if(choice == 1){
        na = n1+n2;
        if(na > da){
            whole = (na-(na%da))/da;
            nf = na-(na-(na%da));
            printf("The answer is %d/%d or %d and %d/%d",na,da,whole,nf,da);
        }else if(na == da){
            printf("The answer is 1");
        }else{
            printf("The answer is %d/%d",na,da);
        }
    }else if(choice == 2){
        na = n1-n2;
        if(na > da){
            whole = (na-(na%da))/da;
            nf = na-(na-(na%da));
            printf("The answer is %d/%d or %d and %d/%d",na,da,whole,nf,da);
        }else if(na == da){
            printf("The answer is 1");
        }else{
            printf("The answer is %d/%d",na,da);
        }
    }else if(choice == 3){
        na = n1*n2;
        da = d1*d2;
        if(na > da){
            whole = (na-(na%da))/da;
            nf = na-(na-(na%da));
            printf("The answer is %d/%d or %d and %d/%d",na,da,whole,nf,da);
        }else if(na == da){
            printf("The answer is 1");
        }else{
            printf("The answer is %d/%d",na,da);
        }
    }else if(choice == 4){
        temp = n2;
        n2 = d2;
        d2 = temp;
        na = n1*n2;
        da = d1*d2;
        if(na > da){
            whole = (na-(na%da))/da;
            nf = na-(na-(na%da));
            printf("The answer is %d/%d or %d and %d/%d",na,da,whole,nf,da);
        }else if(na == da){
            printf("The answer is 1");
        }else{
            printf("The answer is %d/%d",na,da);
        }
    }
    return 0;
}