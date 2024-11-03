#include <stdio.h>

int main() {
    int num;
   long factorial = 1; 
    printf("Please enter a number (less than 50): ");
    scanf("%d", &num);

  
    if (num < 0 || num >= 50) {
        printf("Please enter a  number less than 50.\n");
    } else {
      
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
      
        printf("Factorial of %d is %llu\n", num, factorial);
    }

    return 0;
}

