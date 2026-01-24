#include <stdbool.h>
#include <limits.h>

bool isPalindrome(int x) {
    // 1. Negative numbers and numbers ending in 0 (except 0) are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    long reversedNum = 0; // Use 'long' to prevent overflow during reversal
    int original = x;

    while (x > 0) {
        int lastDigit = x % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        x /= 10;
    }

    // 2. If the reversed number equals the original, it's a palindrome
    return (reversedNum == (long)original);
}