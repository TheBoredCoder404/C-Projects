#include <stdio.h>
#include <math.h>
int main(){
    printf("Number: ");
    int number;
    scanf("%d",&number);
    int count = number/2;
    int total = 0;
    for(int i=1;i<=count;i++){
        if(number%i == 0){
            total = total + i;
        }
    }
    if(total == number){
        printf("%d is a perfect number",number);
    }else{
        printf("%d is not a perfect number",number);
    }
    return 0;
}