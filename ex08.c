#include <stdio.h>

int main() {
    int numbers[10];  
    int total = 0;
    float average;
 
    printf("Please enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        total += numbers[i];  
    }
    printf("\nAll numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n"); 
    average = total / 10.0; 
    printf("\nTotal: %d\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}
