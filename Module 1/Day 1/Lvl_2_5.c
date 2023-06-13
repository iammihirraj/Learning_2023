/*
Write a function to find the type of the character passed
    - 'A' to 'Z', return 1
    - 'a; to 'z', return 2
    - '0' to '9', return 3
    - Any Other printable symbols, return 4
    - Non printable symbols, return 5 
*/

#include <stdio.h>

int charType(char character) {
    if (character >= 'A' && character <= 'Z') {
        return 1;  // Uppercase letter
    } else if (character >= 'a' && character <= 'z') {
        return 2;  // Lowercase letter
    } else if (character >= '0' && character <= '9') {
        return 3;  // Digit
    } else if (character >= 32 && character <= 126) {
        return 4;  // Printable symbol 
    } else {
        return 5;  // Non-printable symbol 
    }
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);
    int result = charType(character);

    switch (result) {
        case 1:
            printf("Type: Uppercase letter - 1\n");
            break;
        case 2:
            printf("Type: Lowercase letter - 2\n");
            break;
        case 3:
            printf("Type: Digit - 3\n");
            break;
        case 4:
            printf("Type: Printable symbol - 4\n");
            break;
        case 5:
            printf("Type: Non-printable symbol - 5\n");
            break;
        default:
            printf("Invalid character\n");
            break;
    }

    return 0;
}