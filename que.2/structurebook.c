#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];
    for(int i = 0; i < n; i++) {
        printf("Enter details for book %d\n", i+1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\nBook Details:\n");
    for(int i = 0; i < n; i++) {
        printf("Book %d: %s by %s - $%.2f\n", i+1, books[i].title, books[i].author, books[i].price);
    }

    return 0;
}
