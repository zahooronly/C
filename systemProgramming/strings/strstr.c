#include <stdio.h>
#include <string.h>

int main() {
    // char* str = "Hello";
    char str[] = "The quick brown fox jumps over the lazy dog.";
    char *substring = strstr(str, "fox");
    if (substring != NULL) {
        printf("Substring 'fox' found at position: %ld\n", substring - str);
    } else {
        printf("Substring not found in the string.\n");
    }
    return 0;
}
