#include <stdio.h>
#include <math.h>
int main(){
    int choice;
    int n;
    double d;
    double f;
    double a;
    printf("Arithmetic(0) or Geometric(1) ");
    scanf("%d",&choice);
    if(choice == 0){
        printf("nth term? ");
        scanf("%d",&n);
        printf("First term? ");
        scanf("%lf",&f);
        printf("Common difference? ");
        scanf("%lf",&d);
        a = f+(n-1)*d;
        printf("The nth term is ");
        printf("%lf",a);
    }else{
        printf("nth term? ");
        scanf("%d",&n);
        printf("First term? ");
        scanf("%lf",&f);
        printf("Common ratio? ");
        scanf("%lf",&d);
        a = f*(pow(d,n-1));
        printf("The nth term is ");
        printf("%lf",a);
    }
    return 0;
}
