#include <stdio.h>
#include <math.h>
int main()
{
    double r;
    double theta;
    double x;
    double y;
    int choice;
    printf("Polar to rectangular \n");
    printf("Polar R Value: ");
    scanf("%lf",&r);
    printf("Polar Theta Value: ");
    scanf("%lf",&theta);
    printf("Is theta is radians(1) or degrees(0) ");
    scanf("%d",&choice);
    if(choice == 0){
        theta = theta*(M_PI/180);
        x = r*(cos(theta));
        y = r*(sin(theta));
        printf("X: ");
        printf("%lf",x);
        printf("\n");
        printf("Y: ");
        printf("%lf",y);
    }else{
        x = r*(cos(theta));
        y = r*(sin(theta));
        printf("X: ");
        printf("%lf",x);
        printf("\n");
        printf("Y: ");
        printf("%lf",y);
    }
    return 0;
}