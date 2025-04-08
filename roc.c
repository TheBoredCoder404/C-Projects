#include <stdio.h>
int main()
{
    double x1;
    double x2;
    double y1;
    double y2;
    double roc;
    printf("X1:");
    scanf("%lf",&x1);
    printf("X2:");
    scanf("%lf",&x2);
    printf("Y1:");
    scanf("%lf",&y1);
    printf("Y2:");
    scanf("%lf",&y2);
    printf("The rate of change or slope is ");
    if(x2 == x1){
        printf("1");
    }else{
        roc = (y2-y1)/(x2-x1);
        printf("%lf",roc);
    }
    return 0; 
}