#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    float change;
    printf("O hai! ");
    do 
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while (!(change >= 0));
    change *= 100;
    int changeInt = round(change);
    int coins = 0;
    
    while (changeInt >= 25) {
        changeInt -= 25;
        coins++;
    }
    
    while (changeInt >= 10) {
        changeInt -= 10;
        coins++;
    }
 
    while (changeInt >= 5) {
        changeInt -= 5;
        coins++;
    }
    
    while (changeInt >= 1) {
        changeInt -= 1;
        coins++;
    }
    
    printf("%i\n", coins);
}