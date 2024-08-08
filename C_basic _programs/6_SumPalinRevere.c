#include <stdio.h>

// Function to reverse the number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to find the sum of the digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if the number is a palindrome
int isPalindrome(int num) {
    int reversed = reverseNumber(num);
    return num == reversed;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of the digits: %d\n", sumOfDigits(num));
    printf("Reversed number: %d\n", reverseNumber(num));

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
