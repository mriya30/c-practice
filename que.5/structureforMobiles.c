#include <stdio.h>

struct Mobile {
    char company[20];
    char color[20];
    char model[20];
    float price;
};

int main() {
    struct Mobile m[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter company, color, model, price:\n");
        scanf("%s %s %s %f", m[i].company, m[i].color, m[i].model, &m[i].price);
    }

    for(int i = 0; i < 3; i++) {
        printf("Mobile %d: %s %s %s %.2f\n", i+1, m[i].company, m[i].color, m[i].model, m[i].price);
    }
    return 0;
}
