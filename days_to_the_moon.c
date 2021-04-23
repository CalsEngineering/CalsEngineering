#include <stdio.h>

int main()
{
    float duration;
    float distance = 378921.46;
    float speed = 140;
    float hours = 24;
    float day;
    day = 379061.468750 / hours;
    
    
    printf("The moon is %f km away. \n", distance);
    printf("Traveling at %f km, ", speed);
    printf("it would take %f hours to drive to the moon. \n", distance + speed);
    printf("Which means it would take %f days to drive to the moon. \n", day);
    return(0);
}
