#include <stdio.h>

int main(void)
{
    float x = 1;
    float y = 10;

    // This doesn't print result properly due to limitation of memory allocated for results
    printf("%.50f\n", x / y);
}