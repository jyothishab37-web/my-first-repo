#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }

    return original == reverse;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;
    }

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}
