#include <stdio.h>

int main() {
    char op;
    float a, b;

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("Result: %.2f\n", a + b); break;
        case '-': printf("Result: %.2f\n", a - b); break;
        case '*': printf("Result: %.2f\n", a * b); break;
        case '/': 
            if(b != 0) printf("Result: %.2f\n", a / b);
            else printf("Division by zero error!\n");
            break;
        default: printf("Invalid operation!\n");
    }

    return 0;
}
