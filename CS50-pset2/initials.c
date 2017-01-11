#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    
    string name = GetString();
    printf("%c", toupper(name[0]));
    char m = ' ';
    for(int i = 0, n = strlen(name); i < n; i++) {
        if (name[i] == m) {
            printf("%c", toupper(name[i+1]));
        }
    }
    printf("\n");
}