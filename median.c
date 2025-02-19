#include <stdio.h>

int main()
{
    int size;
    printf("Size of list?\n");
    scanf("%d",&size);
    int numbers[size];
    for(int i=0;i<size;i++){
        printf("List item?\n");
        scanf("%d",&numbers[i]);
    }
    if(size%2==0){
        printf("The median is ");
        printf("%d",(numbers[size/2]+(numbers[(size/2)-1]))/2);
    }else{
        printf("The median is ");
        printf("%d",numbers[(size-1)/2]);
    }
    return 0;
}