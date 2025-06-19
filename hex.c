#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    printf("Number: \n");
    int num;
    scanf("%d",&num);
    int num2 = num;
    int count = 0;
    bool test = true;
    while(test){
        if(count == 0){
            if(num<=15){
                test = false;
                count = count+1;
            }else{
                count ++;
            }
        }else{
            if((pow(16,count))<=num && num<=((pow(16,count+1))-1)){
            count = count+1;
            test = false;
        }else{
            count ++;
        }
        }
    }
    int remain[count];
    bool test2 = true;
    int count2 = 0;
    while(test2){
        remain[count2] = num2 % 16;
        if(num2/16 == 0){
            test2 = false;
        }else{
            num2 = num2/16;
        }
        count2 ++;
    }
    printf("%d in hexadecimal is ",num);
    for(int i=count-1;i>=0;i--){
        if(remain[i] == 10){
            printf("A");
        }else if(remain[i] == 11){
            printf("B");
        }else if(remain[i] == 12){
            printf("C");
        }else if(remain[i] == 13){
            printf("D");
        }else if(remain[i] == 14){
            printf("E");
        }else if(remain[i] == 15){
            printf("F");
        }else{
            printf("%d",remain[i]);
        }
    }
    return 0;
}