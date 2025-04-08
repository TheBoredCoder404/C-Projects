#include <stdio.h>
#include <math.h>
int main() {
    int c;
    double r;
    double a;
    printf("What is the radius? \n");
    scanf("%lf",&r);
    printf("Area(1) or Circumference(0) of Circle? \n ");
    scanf("%d",&c);
    if(c==1){
        a = M_PI*(pow(r,2));
        printf("The area is ");
        printf("%lf",a);
    }else{
        a = 2*M_PI*r;
        printf("The circumference is ");
        printf("%lf",a);
    }
    return 0;
}