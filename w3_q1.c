#include <stdio.h>
#include <string.h>

void removeChar(char *str, char c) {
    int i, j = 0;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main() {
    char str[100], c;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to remove: ");
    scanf("%c", &c);

    removeChar(str, c);

    printf("Result: %s\n", str);

    return 0;
}