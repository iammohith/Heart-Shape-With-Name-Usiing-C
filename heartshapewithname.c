#include <stdio.h>
#include <string.h>

int main() {
    int i, j, n;  // Loop counters and input size variable
    char name[50];  // Array to store the user's name
    int len;  // Variable to store the length of the name

    // Input: Get the name and size from the user
    printf("Enter your name: ");
    gets(name);  // Get the name (unsafe, better to use fgets for larger programs)
    
    printf("Enter value of n: ");
    scanf("%d", &n);  // Get the value of 'n', which controls the size of the heart shape

    len = strlen(name);  // Get the length of the name

    // Top half of the heart
    for (i = n / 2; i <= n; i += 2) {
        // Print leading spaces before the left half of the heart
        for (j = 1; j < n - i; j += 2) {
            printf(" ");
        }
        
        // Print the left half of the heart
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Print spaces between the two halves of the heart
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print the right half of the heart
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");  // Move to the next line
    }

    // Bottom half of the heart, where the name will be printed
    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        
        // Print the middle line containing the name
        if (i == n) {
            // Print stars before the name
            for (j = 1; j <= (n * 2 - len) / 2; j++) {
                printf("*");
            }

            // Print the user's name in the middle
            printf("%s", name);

            // Print stars after the name
            for (j = 1; j < (n * 2 - len) / 2; j++) {
                printf("*");
            }
        } else {
            // Print stars for the other rows of the bottom half
            for (j = 1; j <= (i * 2) - 1; j++) {
                printf("*");
            }
        }

        printf("\n");  // Move to the next line
    }

    return 0;  // End of program
}
