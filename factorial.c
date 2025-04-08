
#include <stdio.h>
int main()
{
    long a;
    long b =1;
    printf("Which number to find factorial? ");
    scanf("%ld",&a);
    for(long i=1;i<=a;i++){
        b=i*b;
    }
    printf("The factorial is ");
    printf("%ld",b);
    return 0;
}