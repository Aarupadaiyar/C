#include<stdio.h>
#include<stdlib.h>
int main (){
    int a= 5 ;
    int b = 1;
    for(int i=1 ; i <=a ; i++){
        
        b = b *i;

    }
    printf("the factorial of %d is %d", a , b);

}