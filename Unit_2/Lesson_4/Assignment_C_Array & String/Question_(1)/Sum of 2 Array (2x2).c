#include <stdio.h>

int main() 
{
    float First_Matrix  [2][2];
    float Second_Matrix [2][2];
    float Sum_Matrix    [2][2];

    // Input elements for the first matrix
    printf("\n Enter elements of the First Matrix (2x2):\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("\n Element [%d][%d]: ", i, j);
            scanf("%f", &First_Matrix[i][j]);
        }
    }
     
    // Input elements for the second matrix
    printf("\n Enter elements of the Second Matrix (2x2):\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("\n Element [%d][%d]: ", i, j);
            scanf("%f", &Second_Matrix[i][j]);
        }
    }
     
    // Calculate the sum of the two matrices
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            Sum_Matrix[i][j] = First_Matrix[i][j] + Second_Matrix[i][j];
        }
    }

    // Display the sum matrix
    printf("\n Sum of the two matrices:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf(" %0.2f\t", Sum_Matrix[i][j]);
        }
        printf("\n");
    }

    // Pause before exiting
    printf("\nProgram finished. Press any key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing

    return 0;
}
