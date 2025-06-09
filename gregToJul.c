#include <stdio.h>
#include <math.h>
int main(){
    printf("Year:\n");
    double year;
    scanf("%lf",&year);
    printf("Month:\n");
    double month;
    scanf("%lf",&month);
    printf("Day:\n");
    double day;
    scanf("%lf",&day);
    double result = ((367*year)-(floor((7*(year+(floor((month+9)/12))))/4))+(floor((275*month)/9))+day+1721013.5);
    printf("The Julian date would be %lf",result);
    return 0;
}