#include <stdio.h>

struct House {
    int room_quantity;
    int established_year;
    char city[20];
};

int main() {
    struct House h[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter room quantity, year, and city:\n");
        scanf("%d %d %s", &h[i].room_quantity, &h[i].established_year, h[i].city);
    }

    for (int i = 0; i < 2; i++) {
        printf("House %d: %d rooms, built in %d, located in %s\n", i + 1, h[i].room_quantity, h[i].established_year, h[i].city);
    }
    return 0;
}
