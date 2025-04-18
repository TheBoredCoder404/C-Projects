#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    double y;
    double direction;
    double magnitude; 
    printf("Magnitude and Direction of Vector Finder \n");
    printf("X: ");
    scanf("%lf",&x);
    printf("Y: ");
    scanf("%lf",&y);
    magnitude = sqrt((pow(x,2))+(pow(y,2)));
    direction = (atan((y/x)))*(180/M_PI);
    printf("Magnitude ");
    printf("%lf",magnitude);
    printf("\n");
    printf("Direction ");
    printf("%lf",direction);
    printf(" Degrees");
    return 0;
}