#include<stdio.h>
#include<stdlib.h>
int main(){
    // printf("What is your age shittttt: \n");
    // int age ;
    // scanf ("%d", &age);
    // printf("You genius your age is %d",age);
    // printf("What is your gpa : \n");
    // double g;
    // scanf("%lf", &g);
    // printf("Your gpa is %f", g);
    // printf("What is your character : \n");
    // char car;
    // scanf("%c", &car);
    // //single character means c
    // printf("Your gpa is %c", car);
    // printf("What is your character : \n");
    // char str[66];
    // scanf("%s", str);
    // //string of  character means s
    // printf("Your gpa is %s", str);
    printf("What is your line : \n");
    char lin[90];
    fgets(lin , 20 , stdin);
    //line of character means use fgets instead of scanf
    printf("Your gpa is %s", lin);
    return 0;
}