#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is you CS50 name?"); 
    // Greeting someone
    char names[10];
    printf("What is your name?");
     scanf("%[^\n]%*c", names);
    printf("hello, %s\n", names);
    printf("hello, cs50 %s\n", name);
}
