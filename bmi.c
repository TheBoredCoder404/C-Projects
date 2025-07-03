#include <stdio.h>
#include <math.h>
int main(){
    printf("What is your weight? (Pounds)\n");
    double weight;
    scanf("%lf",&weight);
    printf("What is your height (Inches)\n");
    double height;
    scanf("%lf",&height);
    double temp = ((weight*703)/(pow(height,2)));
    double ans = round(temp*10)/10;
    if(ans<18.5){
        printf("Your BMI is %lf\n",ans);
        printf("You are underweight");
    }else if(ans >= 18.5 && ans <= 24.9){
        printf("Your BMI is %lf\n",ans);
        printf("You are normal weight");
    }else if(ans >= 25.0 && ans <= 29.9){
        printf("Your BMI is %lf\n",ans);
        printf("You are overweight");
    }else if(ans >= 30.0){
        printf("Your BMI is %lf\n",ans);
        printf("You are obese");
    }
    return 0;
}