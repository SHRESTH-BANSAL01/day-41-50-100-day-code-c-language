//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], result[100];
    int j = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
            result[j++] = str[i];
    }
    result[j] = '\0';

    printf("%s\n", result);
    return 0;
}