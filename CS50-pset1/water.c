#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("minutes:");
    int bottles = 12 * GetInt();
    printf("bottles:%i\n", bottles);
}