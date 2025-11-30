//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *wordStart = NULL;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (wordStart == NULL) wordStart = &str[i];
        } else {
            if (wordStart != NULL) {
                reverse(wordStart, &str[i - 1]);
                wordStart = NULL;
            }
            if (str[i] == '\0') break;
        }
    }

    printf("%s\n", str);
    return 0;
}