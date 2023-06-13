/*1. Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator*/

/* Using if else */

#include <stdio.h>
int findLargestIfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int largest = findLargestIfElse(num1, num2);
    printf("The largest number is: %d\n", largest);
    return 0;
}

/* Using ternary operator */

#include <stdio.h>

int LargestTernary(int a, int b) {
    int largest = (a > b) ? a : b;
    return largest;
}
int main() {
    int num1 = 10;
    int num2 = 20;   
    int largest = LargestTernary(num1, num2);
    printf("The largest number is: %d\n", largest);
    return 0;
}