#include <stdio.h>
#include <string.h>
int main(){
    printf("Roman numeral: \n");
    char roman[100];
    scanf("%99s",&roman);
    int values[strlen(roman)];
    for(int i=0;i<strlen(roman);i++){
        if(roman[i] == 'I'){
            values[i] = 1;
        }else if(roman[i] == 'V'){
            values[i] = 5;
        }else if(roman[i] == 'X'){
            values[i] = 10;
        }else if(roman[i] == 'L'){
            values[i] = 50;
        }else if(roman[i] == 'C'){
            values[i] = 100;
        }else if(roman[i] == 'D'){
            values[i] = 500;
        }else if(roman[i] == 'M'){
            values[i] = 1000;
        }
    }
    int result = 0;
    for(int i=0;i<strlen(roman);i++){
        if(i == ((strlen(roman))-1)){
            result = result+(values[i]);
        }else{
            if(values[i] > values[i+1] || values[i] == values[i+1]){
                result = result + values[i];
            }else if(values[i] < values[i+1]){
                result = result - values[i];
            }
        }
    }
    printf("The roman numeral %s in integer form is %d",roman,result);
    return 0;
}