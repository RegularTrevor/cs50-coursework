#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int height;
    do 
    {
        printf("Height:");
        height = GetInt();
    }
    while (height > 23 || height < 0);
    
    int spaces, blocks;
    for (int counter = 2; counter < (height + 2); counter++){
        for (spaces = 0; spaces <= (height - counter); spaces++){
            printf(" ");
        }
        for (blocks = 0; blocks < counter; blocks++){
            printf("#");
        }
        printf("\n");
    }
}