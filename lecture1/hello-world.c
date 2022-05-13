#include <cs50.h>
#include <stdio.h>

void hi(void);

int main(void)
{
    string name = get_string("What is you CS50 name?"); 
    // Greeting someone
    char names[10];
    hi();
    printf("What is your name?");
     scanf("%[^\n]%*c", names);
    printf("hello, %s\n", names);
    printf("hello, cs50 %s\n", name);
}

void hi(void)
{
    printf("hi");
}