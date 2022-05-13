#include <stdio.h>

int main(void)
{
    // Greeting someone
    char names[10];
    printf("What is your name?");
     scanf("%[^\n]%*c", names);
    printf("hello, %s", names);
}
