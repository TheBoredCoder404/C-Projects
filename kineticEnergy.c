#include <stdio.h>
#include <math.h>
int main()
{
    double m;
    printf("Mass: ");
    scanf("%lf",&m);
    double v;
    printf("Velocity: ");
    scanf("%lf",&v);
    double k = 0.5*(m*(pow(v,2)));
    printf("The kinetic energy is ");
    printf("%lf",k);
    printf(" Joules");
}