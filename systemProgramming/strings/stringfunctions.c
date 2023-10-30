#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char str3[100];

    // printf("Enter first string: ");
    // scanf("%s", str1);
    // printf("Enter second string: ");
    // scanf("%s", str2);

    // printf("Concatenated string is: %s\n", strcat(str1, str2));
    // printf("Concatenated string is: %s\n", strncat(str1, str2, 5));

    // char abc[100];
    // strcpy(str3, str1);
    // printf("Str3: %s\n", str3);
    // strncpy(abc, str2, 3);
    // printf("abc: %s\n", abc);
    // char abcd[100];
    int cmp = strcmp("bananaaaaaaaa", "apple");
    printf("compare %d\n", cmp);
    // char* substring = strcasestr(str1, "abc");
    // char* duplicate = strdup(str1);
    // printf("Length of string is: %lu\n", strlen(str1)); // %lu for size_t

    // Commented out lines that require custom functions
    // if (cmp == 0) {
    //     printf("Strings are equal\n");
    // } else if (cmp < 0) {
    //     printf("str1 is less than str2\n");
    // } else {
    //     printf("str1 is greater than str2\n");
    // }
    // if (substring != NULL) {
    //     printf("Substring found: %s\n", substring);
    // } else {
    //     printf("Substring not found\n");
    // }
    // printf("Duplicate string is: %s\n", duplicate);
    // return 0;
}
























// #include <stdio.h>
// #include <string.h>
// int main(){
//     // Practice all function of string.h
//     // strcat
//     // strncat
//     // strcpy
//     // strncpy
//     // strlen
//     // strcmp
//     // strcmpi
//     // strncmp
//     // strchr
//     // strrchr
//     // strstr
//     // strdup
//     // strlwr
//     // strupr
//     // strrev
//     // strset
//     // strnset
//     // strtok
//     //  Now Practice all these functions.
//     // 1. Write a program to concatenate two strings using strcat function.
//     // 2. Write a program to concatenate two strings using strncat function.
//     // 3. Write a program to copy one string to another string using strcpy function.
//     // 4. Write a program to copy one string to another string using strncpy function.
//     // 5. Write a program to find the length of a string using strlen function.
//     // 6. Write a program to compare two strings using strcmp function.
//     // 7. Write a program to compare two strings using strcmpi function.
//     // 8. Write a program to compare two strings using strncmp function.
//     // 9. Write a program to find the first occurrence of a character in a given string using strchr function.
//     // 10. Write a program to find the last occurrence of a character in a given string using strrchr function.
//     // 11. Write a program to find the first occurrence of a substring in a given string using strstr function.
//     // 12. Write a program to duplicate a string using strdup function.
//     // 13. Write a program to convert a string to lowercase using strlwr function.
//     // 14. Write a program to convert a string to uppercase using strupr function.
//     // 15. Write a program to reverse a string using strrev function.
//     // 16. Write a program to set all characters in a string to a specific character using strset function.
//     // 17. Write a program to set first n characters in a string to a specific character using strnset function.
//     // 18. Write a program to break a string into a series of tokens using strtok function.
//     char str1[100];
//     char str2[100];
//     char str3[100];
    
//     printf("Enter first string: ");
//     scanf("%s",str1);
//     printf("Enter second string: ");
//     scanf("%s",str2);
//     printf("Concatenated string is: %s\n",strcat(str1,str2));
//     printf("Concatenated string is: %s\n",strncat(str1,str2,3));
//     printf("Copied string is: %s\n",strcpy(str2,str3));
//     printf("Copied string is: %s\n",strncpy(str2,str3,3));
//     printf("Length of string is: %d\n",strlen(str1));
//     printf("Comparison of string is: %d\n",strcmp(str1,str2));
//     printf("Comparison of string is: %d\n",strcmpi(str1,str2));
//     printf("Comparison of string is: %d\n",strncmp(str1,str2,3));
//     printf("First occurence of character is: %s\n",strchr(str1,'a'));
//     printf("Last occurence of character is: %s\n",strrchr(str1,'a'));
//     printf("First occurence of substring is: %s\n",strstr(str1,"abc"));
//     printf("Duplicate string is: %s\n",strdup(str1));
//     printf("Lowercase string is: %s\n",strlwr(str1));
//     printf("Uppercase string is: %s\n",strupr(str1));
//     printf("Reversed string is: %s\n",strrev(str1));
//     printf("Set string is: %s\n",strset(str1,'a'));
//     printf("Set string is: %s\n",strnset(str1,'a',3));
//     printf("Tokenized string is: %s\n",strtok(str1,"abc"));
//     return 0;
    
// }