#include <stdio.h>

 long factorial(int num) {
  
    if (num == 0 || num == 1) {
        return 1;
    } else {

        return num * factorial(num - 1);
    }
}

int main() {
    int num;

    printf("Enter a number (less than 50): ");
    scanf("%d", &num);

  
    if (num < 0 || num >= 50) {
        printf("Please enter a  number less than 50.\n");
    } else {
  
      long result = factorial(num);
  
        printf(" %d! = %llu\n", num, result);
    }

    return 0;
}

