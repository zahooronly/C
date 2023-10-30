#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *result = strrchr(str, '!');
    if (result != NULL) {
        printf("Last '!' found at position: %ld\n", result - str);
    } else {
        printf("'!' not found in the string.\n");
    }
    return 0;
}
