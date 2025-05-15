#include <stdio.h>

int main() {
    int avg;

    printf("Enter the average score: ");
    scanf("%d", &avg);

    if (avg >= 90) 
        printf("Grade: O\n");
    else if (avg >= 80) 
        printf("Grade: A\n");
    else if (avg >= 70) 
        printf("Grade: B\n");
    else if (avg >= 60) 
        printf("Grade: C\n");
    else if (avg >= 40) 
        printf("Grade: D\n");
    else 
        printf("maadu mei\n");

    return 0;
}
