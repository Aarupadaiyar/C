#include<stdio.h>
#include<stdlib.h>
int main(){
    int year;
    printf("wrirte the year?");
    scanf("%d", &year);
    if(year%4==0 && year%100!=0 || year%400==0 ){
      printf("It is leap year");
    }
    else{
        printf("Not a leap year");
    }
}