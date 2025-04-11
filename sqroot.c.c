#include <stdio.h>
int main()
{
    long count = 1;
    int a = 0;
    long b;
    printf("Which number? ");
    scanf("%ld",&b);
    while(a==0){
      if(count*count == b){
        a = 1;
        printf("The square root is ");
        printf("%ld",count);
      }else{
        count++;
      }
    }
   return 0; 
}