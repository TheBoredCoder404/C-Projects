#include <stdio.h>
#include <stdbool.h>
int main(){
    printf("Which number would you like to convert?\n");
    int number;
    scanf("%d",&number);
    bool test = true;
    int nums[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const char *icons[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int len = sizeof(nums) / sizeof(nums[0]);
    while(test){
        if(number == 0){
            test = false;
        }
        for(int i=0;i<len;i++){
            if(number >= nums[i]){
                printf("%s",icons[i]);
                number = number - nums[i];
                break;
            }
        }
    }
    return 0;
}