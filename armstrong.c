#include <stdio.h>
#include <math.h>
int main(){
    printf("Number: ");
    int num;
    scanf("%d",&num);
    double temp = floor(log10(num))+1;
    int digits = temp;
    int list[digits];
    int d = 10;
    list[0] = num%10;
    for(int i=1;i<digits;i++){
        list[i] = (num/d)%10;
        d = d*10;
    }
    int total = 0;
    for(int i=0;i<digits;i++){
        total = total+(int)pow(list[i],digits);
    }
    if(total == num){
        printf("%d is a armstrong number",num);
    }else{
        printf("%d is not a armstrong number",num);
    }
    
    return 0;
}