#include <stdio.h>

float calculatePercentage(int total) {
    return total / 3.0;
}

char calculateGrade(float percentage) {
    if (percentage >= 75)
        return 'A';
    else if (percentage >= 60)
        return 'B';
    else if (percentage >= 50)
        return 'C';
    else
        return 'F';
}

int main() {
    char name[50];
    int m1, m2, m3, total;
    float percentage;
    char grade;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;

    percentage = calculatePercentage(total);
    grade = calculateGrade(percentage);

    printf("\n--- Result ---\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}