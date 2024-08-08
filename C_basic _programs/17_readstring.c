#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, vowels = 0, consonants = 0, spaces = 0;
    char ch;

    // Read the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Process each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        
        if (isalpha(ch)) {
            alphabets++;
            ch = tolower(ch);  // Convert to lowercase for vowel check
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            spaces++;
        }
    }

    // Output the results
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}
