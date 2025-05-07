#include <stdio.h>
#include <ctype.h>

void countVowels(const char *str) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    while (*str) {
        char ch = tolower(*str);
        switch (ch) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
        str++;
    }
    printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", a, e, i, o, u);
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countVowels(sentence);
    return 0;
}
