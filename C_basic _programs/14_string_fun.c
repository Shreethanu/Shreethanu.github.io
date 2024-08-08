#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char str3[200]; // To store concatenated result

    // String Length
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character if present

    printf("Length of the string \"%s\" is %lu\n", str1, strlen(str1));

    // String Copy
    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character if present

    strcpy(str3, str2); // Copy str2 to str3
    printf("Copied string: \"%s\"\n", str3);

    // String Concatenate
    strcat(str3, " "); // Add a space between strings
    strcat(str3, str1); // Concatenate str1 to str3
    printf("Concatenated string: \"%s\"\n", str3);

    // String Comparison
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("The strings \"%s\" and \"%s\" are equal.\n", str1, str2);
    } else if (cmp < 0) {
        printf("The string \"%s\" is less than \"%s\".\n", str1, str2);
    } else {
        printf("The string \"%s\" is greater than \"%s\".\n", str1, str2);
    }

    return 0;
}
