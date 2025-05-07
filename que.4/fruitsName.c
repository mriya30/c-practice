#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    int n;
    char fruit[20], color[20];

    printf("Enter number of fruits: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter fruit and its color: ");
        scanf("%s %s", fruit, color);
        fprintf(fp, "%s %s\n", fruit, color);
    }
    fclose(fp);
    return 0;
}
