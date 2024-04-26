#include<stdio.h>
#include<stdlib.h>
int apple (char name[] , int age) {
    double age_cube;
    age_cube = pow(age ,3);
    printf("Your name is %s and your age is %d and cuberoot of your age is %.2f ",name , age , age_cube);
}
int main(){
    apple("Aarov",19);
}