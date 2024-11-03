#include <stdio.h>

int main() {
    int number, count = 0, total = 0;
    float average;

    printf("Enter numbers (It stops when you press -1):\n");
        

    while (1) {
      
        printf("Number: ");
        scanf("%d", &number);

        
        if (number == -1) {
            break;
        }
        count++;
        total += number;
    }  
    if (count > 0) {
        average = (float)total / count;
    } else {
        average = 0.0;
    }
    printf("\nAll numbers entered (excluding -1): %d\n", count);
    printf("Total of numbers: %d\n", total);
    printf("Average of numbers: %.2f\n", average);

    return 0;
}
