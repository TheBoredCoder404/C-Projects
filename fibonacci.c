#include <stdio.h>
int main(){
    int size;
    printf("What is the size of the sequence?  Must be at least three. \n");
    scanf("%d",&size);
    int numbers[size];
    printf("First number in sequence? \n");
    scanf("%d",&numbers[0]);
    printf("Second number in sequence? \n");
    scanf("%d",&numbers[1]);
    for(int i=2;i<size;i++){
        numbers[i] = numbers[i-1]+numbers[i-2];
    }
    printf("List: \n");
    for(int i=0;i<size;i++){
        printf("%d\n",numbers[i]);
    }
}