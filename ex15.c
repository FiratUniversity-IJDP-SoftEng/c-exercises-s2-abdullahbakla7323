#include <stdio.h>

int main() {
    int n;


    do {
        printf("Please enter a number (1-10): ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
     printf("oww sory!. Please enter a number between 1 and 10.\n");
        }
    } while (n < 1 || n > 10); 


    for (int i = 1; i <= n; i++) {

        for (int j = n; j > i; j--) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); 
    }


    for (int i = n - 1; i >= 1; i--) {

        for (int j = n; j > i; j--) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); 
    }

    return 0;
}
