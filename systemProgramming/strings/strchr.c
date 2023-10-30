#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *result = strchr(str, '!');
    if (result != NULL) {
        printf("First '!' found at position: %ld\n", result - str);
    } else {
        printf("'o' not found in the string.\n");
    }
    return 0;
}
