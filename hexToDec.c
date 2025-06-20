#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    printf("What is the hexadecimal? Use uppercase letters. \n");
    char hex [64];
    scanf("%63s",hex);
    int total = 0;
    int count = 0;
    int temp;
    for(int i=strlen(hex)-1;i>=0;i--){
        if(hex[i] == 'A'){
            total = (total + (10*(pow(16,count))));
        }else if(hex[i] == 'B'){
            total = (total + (11*(pow(16,count))));
        }else if(hex[i] == 'C'){
            total = (total + (12*(pow(16,count))));
        }else if(hex[i] == 'D'){
            total = (total + (13*(pow(16,count))));
        }else if(hex[i] == 'E'){
            total = (total + (14*(pow(16,count))));
        }else if(hex[i] == 'F'){
            total = (total + (15*(pow(16,count))));
        }else{
            temp = hex[i] - '0';
            total = (total +(temp*(pow(16,count))));
        }
        count++;
    }
    printf("%d",total);
    return 0;
}