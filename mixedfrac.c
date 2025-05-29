#include <stdio.h>
int main(){
    printf("Mixed to Normal(1) or Normal to Mixed(0)\n");
    int choice;
    scanf("%d",&choice);
    int whole;
    int num;
    int denom;
    if(choice == 1){
        printf("Whole number?\n");
        scanf("%d",&whole);
        printf("Numerator? \n");
        scanf("%d",&num);
        printf("Denominator? \n");
        scanf("%d",&denom);
        num = num+(denom*whole);
        printf("The normal fraction is %d/%d",num,denom);
    }else{
        printf("Numerator? \n");
        scanf("%d",&num);
        printf("Denominator? \n");
        scanf("%d",&denom);
        whole = (num-(num%denom))/denom;
        num = num-(num-(num%denom));
        printf("The new fraction is %d and %d/%d",whole,num,denom);
    }
    return 0;
}