#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main(){
    double x;
    double y;
    double r;
    double theta;
    double temp;
    printf("Rectangular to Polar Cords \n");
    printf("X: ");
    scanf("%lf",&x);
    printf("Y: ");
    scanf("%lf",&y);
    r = sqrt((pow(x,2))+(pow(y,2)));
    if (x > 0) {
    theta = atan(y / x);
    } else if (x < 0) {
    theta = atan(y / x) + M_PI;
    } else if (x == 0 && y > 0) {
    theta = M_PI / 2;
    } else if (x == 0 && y < 0) {
    theta = -M_PI / 2;
    } else {
    theta = 0;
    }
    printf("R: ");
    printf("%lf",r);
    printf("\n");
    printf("Theta: ");
    printf("%lf",theta);
    return 0;
}