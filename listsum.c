#include <stdio.h>

int main()
{
    int size;
    int sum = 0;
    printf("What is length of list?\n");
    scanf("%d",&size);
    int numbers[size];
    for(int i=0;i<size;i++){
        printf("List Item?\n");
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<size;i++){
        sum = sum + numbers[i];
    }
    printf("The sum of the list is ");
    printf("%d\n",sum);
    printf("The average is ");
    printf("%d",sum/size);
    return 0;
}