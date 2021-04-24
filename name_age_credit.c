#include <stdio.h>

int main()
{
    char name[20];
    char age[100];
    char credit[15];
    
    printf("What is your name?");
    gets(name);
    printf("Pleased to meet you, %s!\n", name);
    printf("Since we're getting to know each other, how old are you? \n");
    gets(age);
    printf("Wow, you're %s years old! I'm only a few minutes old! \n", age);
    printf("Now that the formalities are out of the way, what's your credit card number?");
    gets(credit);
    printf("Wow, you're that stupid, huh? Thanks for that, Mr. %s.\n", credit);
    return(0);
}
