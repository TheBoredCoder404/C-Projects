#include <stdio.h>
int main()
{
    double hours;
    double minutes;
    double total;
    double payrate;
    double pay;
    printf("Hours worked: ");
    scanf("%lf",&hours);
    printf("Minutes worked: ");
    scanf("%lf",&minutes);
    printf("Pay rate per hour: ");
    scanf("%lf",&payrate);
    total = hours+(minutes/60);
    pay = total*payrate;
    printf("You should be payed $");
    printf("%lf",pay);
    return 0;
}