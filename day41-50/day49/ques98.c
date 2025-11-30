//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int lastSpace = -1;
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    if (str[0] != ' ')
        printf("%c.", toupper(str[0]));

    for (int i = 1; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            printf("%c.", toupper(str[i+1]));
    }

    printf(" %s\n", &str[lastSpace + 1]);
    return 0;
}