#include <stdio.h>
#include <math.h>
int main(){
    printf("Size of data set? ");
    int size;
    scanf("%d",&size);
    double nums[size];
    for(int i=0;i<size;i++){
        printf("Num: ");
        scanf("%lf",&nums[i]);
    }    
    printf("Mean(1), Mode(2), or Median(3)? ");
    int choice; 
    scanf("%d",&choice);
    if(choice == 1){
        double count;
        for(int i=0;i<size;i++){
            count = count+nums[i];
        }
        printf("The mean is ");
        printf("%lf",count/size);
    }else if(choice == 2){
        
        int nums2[size];
        int count = 0;
        for(int i=0;i<size;i++){
            count = 0;
            for(int j=0;j<size;j++){
                if(nums[j] == nums[i]){
                    count++;
                }
            }
            nums2[i] = count;
        }
        double current = nums2[0];
        int store;
        for(int i=1;i<size;i++){
            if(nums2[i] > current){
                current = nums2[i];
                store = i;
            }
        }
        printf("The mode is ");
        printf("%lf",nums[store]);
    }else{
        if(size %2 == 0){
            printf("The median is ");
            printf("%lf",((nums[(size/2)-1])+(nums[size/2]))/2);
        }else{
            printf("The median is ");
            printf("%lf",nums[(size-1)/2]);
        }
    }
    return 0;
}