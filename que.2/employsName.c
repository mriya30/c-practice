#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50], role[50];
    for(int i = 0; i < 3; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf(" %[^\n]", name);
        printf("Enter role of employee %d: ", i+1);
        scanf(" %[^\n]", role);
        fprintf(fptr, "Employee %d: %s - %s\n", i+1, name, role);
    }

    fclose(fptr);
    printf("Data written to data.txt successfully.\n");
    return 0;
}
