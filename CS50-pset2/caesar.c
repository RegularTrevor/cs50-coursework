#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[]) {

    if (argc != 2) {
        printf("Please provide the key value.");
        return 1;
    } else {
        int c = atoi(argv[1]);
        if (c <= 0) {
            printf("Key value must be a non-negative integer.");
            return 1;
        } else {
        string plain = GetString();
        int holder;
        for (int i = 0; i < strlen(plain); i++) {
            if (isupper(plain[i])) {
                holder = (plain[i] + c - 64) % 26;
                holder += 64;
                printf("%c", holder);
            } else if (islower(plain[i])) {
                holder = (plain[i] + c - 96) % 26;
                holder += 96;
                printf("%c", holder);
            } else {
                printf("%c", plain[i]);
            }
        }
        printf("\n");
        return 0;
        }
    }
    
    
}