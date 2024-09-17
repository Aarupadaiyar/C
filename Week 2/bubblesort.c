#include<stdlib.h>
#include<stdio.h>
int main (){
    int a ;
    printf("How many elements you want in a array ? \n");
    scanf("%d" , &a);
    int arr[a];
    printf("write the elements now ");
    for(int i =0 ; i < a ; i ++){
        scanf("%d", &arr[i]);
    }
    for(int i =0;i < a ;i++){
        for(int j =0 ; j < a-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for ( int i =0 ; i < a ;i++){
        printf("%d", arr[i]);
    }

}
