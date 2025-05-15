#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average;
    int i;
    int pass = 1; // Assume pass unless a subject is failed

    // Get 5 subject marks from user
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];

        if (marks[i] < 35) {
            pass = 0; // Fail if any subject mark is less than 35
        }
    }

    // Calculate average
    average = total / 5.0;

    // Print total and average
    printf("\nTotal Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    // Determine pass or fail
    if (pass) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
