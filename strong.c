#include <stdio.h>
#include <math.h>
int main(){
    printf("Number: ");
    int number;
    scanf("%d",&number);
    int count = floor(log10(number))+1;
    int total = 0;
    int current2 = 0;
    int m = 10;
    for(int i=0;i<count;i++){
        int divisor = (int)pow(10, i);
        int current2 = (number / divisor) % 10;
        int other = 1;
        for(int j=current2;j>=1;j--){
            other *= j;
        }
        total += other; 
    }
    if(total == number){
        printf("%d is a stong number",number);
    }else{
        printf("%d is not a stong number",number);
    }
    return 0;
}