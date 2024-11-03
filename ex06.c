#include <stdio.h>

int main() {
    int divisible_by_3[20]; 
    int index = 0;

    for (int i = 100; i >= 50; i--) {
        if (i % 3 == 0) {
            divisible_by_3[index] = i;
            index++;
        }
    }   
    printf("Result:\n");
    for (int j = 0; j < index; j++) {
        printf("%d ", divisible_by_3[j]);
    }

    return 0;
}

