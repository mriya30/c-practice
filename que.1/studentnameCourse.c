#include <stdio.h>

int main() {
    FILE *fptr = fopen("data.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50], course[50];
    for(int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf(" %[^\n]", name);
        printf("Enter course of student %d: ", i+1);
        scanf(" %[^\n]", course);
        fprintf(fptr, "Student %d: %s - %s\n", i+1, name, course);
    }

    fclose(fptr);
    printf("Data written to data.txt successfully.\n");
    return 0;
}
