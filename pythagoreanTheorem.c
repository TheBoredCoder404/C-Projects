#include <math.h>
#include <stdio.h>
int main()
{
    double a;
    double b;
    printf("A:");
    scanf("%lf",&a);
    printf("B:");
    scanf("%lf",&b);
    printf("C equals ");
    printf("%lf",sqrt((pow(a,2))+(pow(b,2))));
    return 0;
}
