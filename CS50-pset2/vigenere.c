#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[]) {
    
    if (argc != 2) {
        printf("Please provide a codeword.\n");
        return 1;
    } else {
        for (int i = 0; i < strlen(argv[1]); i++) {
            if (!(isalpha(argv[1][i]))) {
                printf("Only alphabetical characters may be used in the codeword.\n");
                return 1;
            }
        }
        int keycounter = 0;
        int holder = 0;
        int keychanger = 0;
        string plain = GetString();
        for (int j = 0; j < strlen(plain); j++) {
            if (keycounter == strlen(argv[1])) {
                keycounter = 0;
            }
            keychanger = argv[1][keycounter];
            if (isupper(argv[1][keycounter])) {
                keychanger -= 64;
            } else {
                keychanger -= 96;
            }
            if (isalpha(plain[j])) {
                if (isupper(plain[j])) {
                    holder = (plain[j] + keychanger - 65) % 26;
                    holder += 64;
                    printf("%c", holder);
                    keycounter++;
                } else if (islower(plain[j])) {
                    holder = (plain[j] + keychanger - 97) % 26;
                    holder += 96;
                    printf("%c", holder);
                    keycounter++;
                }
            } else {
                printf("%c", plain[j]);
            }
        }
        printf("\n");
    }
}