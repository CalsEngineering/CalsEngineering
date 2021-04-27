#include <stdio.h>

int main()
{
    int fav;
    
    printf("Enter your favorite number:");
    scanf("%d", &fav);
    if(fav == 7)
    {
        printf("Hey, that's my favorite number too!");
    }
    return(0);
}
