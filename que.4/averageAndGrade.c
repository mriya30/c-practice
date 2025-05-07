#include <stdio.h>

int main() {
    int marks[5], i;
    float average;
    char grade;

    printf("Enter marks for 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    int total = 0;
    for(i = 0; i < 5; i++) {
        total += marks[i];
    }
    average = total / 5.0;

    if (average >= 90) grade = 'A';
    else if (average >= 80) grade = 'B';
    else if (average >= 70) grade = 'C';
    else if (average >= 60) grade = 'D';
    else grade = 'F';

    printf("Average = %.2f, Grade = %c\n", average, grade);
    return 0;
}
