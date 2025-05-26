#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    printf("Is it a repeating decimal? (1)Yes, (0)No\n");
    int choice;
    scanf("%d",&choice);
    int num1;
    int num2;
    int repeat;
    double temp;
    if(choice == 1){
        printf("Which part repeats. Do not include decimal point\n");
        scanf("%d",&repeat);
        int length = floor(log10(repeat))+1;
        num1 = repeat;
        num2 = (pow(10,length))-1;
    }else{
        printf("Decimal: ");
        char dec[64];
        scanf("%63s",dec);
        int count = 0;
        for(int i=0;i<strlen(dec);i++){
        count = count + 1;
        if(dec[i] == '.'){
            count = 0;
        }
    }
        char *endptr;
        temp = strtod(dec,&endptr);
        num1 = temp*(pow(10,count));
        num2 = pow(10,count);
    }
    int a = num1;
    int b = num2;
    int r;
    bool test = true;
    while(test){
        if(a % b == 0){
            test = false;
        }else{  
            r=a%b;
            a = b;
            b = r;
        }
    }
    num1 = num1/b;
    num2 = num2/b;
    if(choice == 1){
        printf("The repeating decimal .%d as a fraction is %d/%d",repeat,num1,num2);
    }else{
        printf("%f as a fraction is %d/%d",temp,num1,num2);
    }
    return 0;
}
