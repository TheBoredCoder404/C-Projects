#include <stdio.h>
int main(){
    // Get user input
    printf("MUST START AT MINIMUM OF 2\n");
    int start;
    printf("Start: ");
    scanf("%d",&start);
    if(start < 2){
        printf("INVALID INPUT - MUST BE MINIMUM OF 2");
        return 0;
    }
    printf("End: ");
    int end;
    scanf("%d",&end);
    // Add middle values to list
    int nums[(end-start)+1];
    nums[0] = start;
    nums[end-start] = end;
    int temp = start+1;
    for(int i=1;i<(((end-start)+1)-1);i++){
        nums[i] = temp;
        temp = temp + 1;
    }
    // Sort list of prime numbers
    int current;
    for(int i=0;i<((end-start)+1);i++){
        if(nums[i] != 0){
            current = nums[i];
        }
        for(int j=0;j<((end-start)+1);j++){
            if(nums[j] != 0){
                if (nums[j] != current && nums[j] % current == 0) {
                        nums[j] = 0;
                }
            }
        }
    }
    // Print prime numbers
    printf("The prime numbers are:\n");
    for(int i=0;i<((end-start)+1);i++){
        if(nums[i] != 0){
            printf("%d",nums[i]);
            printf("\n");
        }
    }
    return 0;
}