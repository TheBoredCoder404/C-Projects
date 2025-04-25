#include <stdio.h>
#include <math.h>
int main() {
    double x1;
    double x2;
    double y1;
    double y2;
    double ans;
    printf("X1: ");
    scanf("%lf",&x1);
    printf("Y1: ");
    scanf("%lf",&y1);
    printf("X2: ");
    scanf("%lf",&x2);
    printf("Y2: ");
    scanf("%lf",&y2);
    ans = sqrt((pow(x1-x2,2))+(pow(y2-y1,2)));
    printf("The distance is ");
    printf("%lf",ans);
    return 0;
}