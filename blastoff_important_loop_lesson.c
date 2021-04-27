#include <stdio.h>

int main()
{
    int b;
    
    printf("Ready for liftoff...");
    for(b=10; b>0; b = b - 1)
        printf("%d\n", b);
        printf("BLAST OFF!");
    return(0);
}

