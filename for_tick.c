#include <stdio.h>

int main()
{
    int tick;
    
    printf("Variable tick is uninitalized. \n");
    for(tick=1; tick < 10; tick = tick + 1)
    {
        printf("\tin the loop, tick = %d\n", tick);
    }
    printf("After the loop, tick = %d\n", tick);
    return(0);
}
