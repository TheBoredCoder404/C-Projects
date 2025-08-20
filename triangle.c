#include <stdio.h>
#include <math.h>
int main(){
    // Get user input
    printf("A: ");
    double a;
    scanf("%lf",&a);
    printf("B: ");
    double b;
    scanf("%lf",&b);
    printf("C: ");
    double c;
    scanf("%lf",&c);
    // Validate user input
    if(!((a+b) > c)){
        printf("Invalid input");
        return 0;
    }else if(!((a+c) > b)){
        printf("Invalid input");
        return 0;
    }else if(!((b+c) > a)){
        printf("Invalid input");
        return 0;
    }
    // Calculate s
    double s = (a+b+c)/2;
    // Calculate area
    double area = sqrt((s*(s-a))*(s-b)*(s-c));
    // Print out area
    printf("The area of the triangle is %lf",area);
    return 0;
}