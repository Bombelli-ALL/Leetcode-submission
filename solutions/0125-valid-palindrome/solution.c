#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    int i = 0;
    int l = strlen(s) - 1; // Start at the last printable character

    while (i < l) {
        // Skip non-alphanumeric characters from the left
        while (i < l && !isalnum((unsigned char)s[i])) {
            i++;
        }
        
        // Skip non-alphanumeric characters from the right
        while (i < l && !isalnum((unsigned char)s[l])) {
            l--;
        }
        
        // Compare the characters (case-insensitive)
        if (tolower((unsigned char)s[i]) != tolower((unsigned char)s[l])) {
            return false; // Mismatch found, not a palindrome
        }
        
        i++;
        l--;
    }
    
    // If the loop finishes without returning false, it is a palindrome
    return true;
}

