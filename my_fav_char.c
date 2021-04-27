#include <stdio.h>

int main()
{
    char fav;
    
    printf("Enter your favorite character:");
    scanf("%s", &fav);
    if(fav == 'Q')
    {
        printf("Hey, that's my favorite character too!");
    }
    return(0);
}
