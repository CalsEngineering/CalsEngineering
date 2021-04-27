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
    else if(temp >= 90)
    {
        printf("Man, it's so hot outside...");
    }
    else
    {
        printf("Ah, nice and cool.");
    }
    return(0);
}
