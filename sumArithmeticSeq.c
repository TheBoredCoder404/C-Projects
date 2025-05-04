#include<stdio.h>
#include<math.h>
int main()
{
    printf("Number of terms(n): ");
    double n;
    scanf("%lf",&n);
    printf("First term(a1): ");
    double a1;
    scanf("%lf",&a1);
    printf("Last term(an): ");
    double an;
    scanf("%lf",&an);
    double ans = (n/2)*(a1+an);
    printf("The sum is ");
    printf("%lf",ans);
    return 0;
}
