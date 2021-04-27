#include <stdio.h>

int main()
{
    float temp;
    
    printf("What is the temperature outside?");
    scanf("%f", &temp);
    if(temp < 50)
    {
        printf("It's a bit chilly out, innit? \n");
    }
    else
    {
        printf("Ah, nice and cool.");
    }
    return(0);
}
