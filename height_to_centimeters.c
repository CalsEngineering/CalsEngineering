#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[20];
    int age;
    float height;
    float centimeters = 2.54;
    
    printf("Enter your age:");
    age = atoi(gets(input));
    
    printf("Enter your height in inches:");
    height = atof(gets(input));
    
    printf("You are %d months old\n", age*12);
    printf("and %f centimeters tall. \n", height*centimeters);
    return(0);
}