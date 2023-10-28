#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(input); i++) {
        char c = tolower(input[i]); // Convert to lowercase to handle both upper and lower case letters

        if (isalpha(c)) { // Check if it's an alphabet character
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
