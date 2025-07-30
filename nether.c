#include <stdio.h>
int main(){
    printf("X Cord: ");
    double x;
    scanf("%lf",&x);
    printf("Y Cord: ");
    double y;
    scanf("%lf",&y);
    printf("Z Cord: ");
    double z;
    scanf("%lf",&z);
    printf("Overworld to Nether(0) or Nether to Overworld(1): ");
    int choice;
    scanf("%d",&choice);
    if(choice == 0){
        x = x/8;
        z = z/8;
    }else if(choice == 1){
        x = x*8;
        z = z*8;
    }
    printf("\nNew Cords:\nX: %lf\nY: %lf\nZ: %lf",x,y,z);
    return 0;
}