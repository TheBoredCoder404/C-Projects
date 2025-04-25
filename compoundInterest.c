#include<stdio.h>
#include<math.h>
int main()
{
    double p;
    double r;
    double n;
    double t;
    double a;
    printf("P(Initial Balance): ");
    scanf("%lf",&p);
    printf("R(Interest Rate) as a percent: ");
    scanf("%lf",&r);
    printf("N(Num of times interest applied per time period): ");
    scanf("%lf",&n);
    printf("T(Number of time periods): ");
    scanf("%lf",&t);
    r = r/100;
    a = p*pow((1+(r/n)),n*t);
    printf("The amount of money is ");
    printf("%lf",a);
    return 0;
}
