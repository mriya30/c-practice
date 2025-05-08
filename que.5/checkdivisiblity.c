#include <stdio.h>

int isDivisible(int n) {
    return (n % 3 == 0 && n % 5 == 0);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isDivisible(num))
        printf("Divisible by both 3 and 5\n");
    else
        printf("Not divisible by both\n");
    return 0;
}
