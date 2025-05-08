#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    int n;
    char name[20], role[20];

    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name and role: ");
        scanf("%s %s", name, role);
        fprintf(fp, "%s %s\n", name, role);
    }

    fclose(fp);
    return 0;
}
