// #include <stdio.h>

// int stringLength(const char *str) {
//     int length = 0;
//     while (str[length] != '\0') {
//         length++;
//     }
//     return length;
// }

// int main() {
//     char str[100];

//     // Read a string from the user
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

//     // Find the length of the string
//     int length = stringLength(str);
//     printf("Length of the string \"%s\" is %d\n", str, length);

//     return 0;
// }



#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0;

    // Read the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string is %d\n", length);
    return 0;
}

