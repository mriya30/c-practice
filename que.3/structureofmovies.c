#include <stdio.h>

struct Movie {
    char title[50];
    char genre[30];
    char language[30];
};

int main() {
    int n;
    printf("Enter number of movies: ");
    scanf("%d", &n);
    struct Movie movies[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for movie %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", movies[i].title);
        printf("Genre: ");
        scanf(" %[^\n]", movies[i].genre);
        printf("Language: ");
        scanf(" %[^\n]", movies[i].language);
    }

    printf("\nMovie Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Movie %d: %s | %s | %s\n", i + 1, movies[i].title, movies[i].genre, movies[i].language);
    }

    return 0;
}
