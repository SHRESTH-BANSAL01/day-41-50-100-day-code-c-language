//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (str[0] != ' ')
        printf("%c.", toupper(str[0]));

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != '\0' && str[i+1] != ' ')
            printf("%c.", toupper(str[i+1]));
    }
    printf("\n");
    return 0;
}