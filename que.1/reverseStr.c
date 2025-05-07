#include <stdio.h>

void reverseString(char str[]) {
    int len = 0, i;
    while (str[len] != '\0') len++;

    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    reverseString(str);
    return 0;
}
