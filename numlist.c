#include <stdio.h>
int main(){
    int num;
    printf("How long is list");
    scanf("%d", &num);
    int numbers[num];
    for(int i=0;i<num;i++){
        printf("Num:\n");
        scanf("%d", &numbers[i]);
    }
    for(int i=0;i<num;i++){
        printf("%d\n",numbers[i]);
    }
    return 0;
}