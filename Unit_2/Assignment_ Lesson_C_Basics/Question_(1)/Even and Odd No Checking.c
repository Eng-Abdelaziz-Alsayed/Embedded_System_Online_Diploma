#include <stdio.h>

int main() 
{
    int Check_No;
    
    printf("Enter the Number : ");
    scanf("%d", &Check_No); // The program will wait for user input here

    if ( Check_No % 2 == 0) 
    {
        printf( "\n \"%d\" is the Even Number\n", Check_No);
    }
    else
      {
        printf( "\n \"%d\" is the Odd Number\n", Check_No);
      }
    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
