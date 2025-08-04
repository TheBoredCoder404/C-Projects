#include <stdio.h>
#include <math.h>
int main(){
    printf("Change: ");
    double change;
    scanf("%lf",&change);
    printf("\n");
    int dollar = change;
    int cent = (change-(floor(change)))*100;
    int dollars[7][2] = {{100,0},{50,0},{20,0},{10,0},{5,0},{2,0},{1,0}};
    int cents[4][2] ={{25,0},{10,0},{5,0},{1,0}};
    int amount;
    for(int i=0;i<7;i++){
        if(dollar == 0){
            break;
        }
        amount = 0;
        if(dollar >= dollars[i][0]){
            amount = (dollar-(dollar%dollars[i][0]))/dollars[i][0];
            dollar = dollar-(dollars[i][0]*amount);
            dollars[i][1] = amount;
        }
    }
    int amount2;
    for(int i=0;i<4;i++){
        if(cent == 0){
            break;
        }
        amount2 = 0;
        if(cent >= cents[i][0]){
            amount2 = (cent-(cent%cents[i][0]))/cents[i][0];
            cent = cent-(cents[i][0]*amount2);
            cents[i][1] = amount2;
        }
    }
    for(int i=0;i<7;i++){
        if(dollars[i][1] > 0){
            printf("%d Dollar Bills: %d\n",dollars[i][0],dollars[i][1]);
        }
    }
    for(int i=0;i<4;i++){
        if(cents[i][1] > 0){
            if(i == 0){
                printf("Quarters: %d\n",cents[i][1]);
            }else if(i == 1){
                printf("Dimes: %d\n",cents[i][1]);
            }else if(i == 2){
                printf("Nickles: %d\n",cents[i][1]);
            }else if(i == 3){
                printf("Pennies: %d\n",cents[i][1]);
            }
        }
    }
    return 0;
}