#include <stdio.h>

struct Laptop {
    char company[20];
    char processor[20];
    float price;
};

int main() {
    struct Laptop l[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter company, processor, price:\n");
        scanf("%s %s %f", l[i].company, l[i].processor, &l[i].price);
    }

    for(int i = 0; i < 3; i++) {
        printf("Laptop %d: %s %s %.2f\n", i+1, l[i].company, l[i].processor, l[i].price);
    }
    return 0;
}
