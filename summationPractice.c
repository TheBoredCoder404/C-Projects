#include<stdio.h>
#include<math.h>
int main()
{
    printf("Start index(k): ");
    int k;
    scanf("%d",&k);
    printf("End index(n): ");
    int n;
    scanf("%d",&n);
    double sum;
    for(int i=k;i<=n;i++){
        sum = sum+(3*pow(i,2)+(2*i)+1);
    }
    printf("The sum is ");
    printf("%lf",sum);
    return 0;
}
