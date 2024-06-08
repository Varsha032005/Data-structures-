#include <stdio.h>
int isPalindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }
    if (originalNum == reverseNum) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);

