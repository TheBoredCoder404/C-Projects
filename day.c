#include <stdio.h>
#include <math.h>
int main(){
    int m2;
    int year2;
    printf("Year:\n");
    int year;
    scanf("%d",&year);
    year2 = year;
    printf("Day:\n");
    int q;
    scanf("%d",&q);
    printf("Month as number:\n");
    int m;
    scanf("%d",&m);
    m2 = m;
    if(m == 1){
        m2 = 13;
        year2 = year-1;
    }else if(m == 2){
        m2 = 14;
        year2 = year-1;
    }
    int j = year2/100;
    int k = year2%100;
    int h = (q+(floor((13*(m2+1))/5))+k+(floor(k/4))+(floor(j/4))-2*j);
    h = h%7;
    const char* days[] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    const char* day = days[h];
    printf("The date %d/%d/%d would be the day %s",m,q,year,day);
    return 0;
}