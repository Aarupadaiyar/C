#include<stdio.h>
#include<stdlib.h>
int main(){
    int sam[5];
    printf("Enter 5 integers \n");
    for(int i=0;i<5;i++){
        scanf("%d " , &sam[i]);
    }
    for(int i =0;i<5;i++){
        printf("the answer is %d \n", sam[i]);
    }
}
