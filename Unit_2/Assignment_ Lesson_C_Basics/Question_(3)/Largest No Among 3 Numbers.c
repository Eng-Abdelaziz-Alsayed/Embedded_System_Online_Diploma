#include <stdio.h>

int main() 
{
    float First_No , Second_No , Third_No ;
    
    // Prompt the user to enter three numbers
    printf(" Enter your three Number to find the Lagest One : \n");

    // The Program will wait for User Input here (Numbers)
    scanf("%f", &First_No); 
    scanf("%f", &Second_No);
    scanf("%f", &Third_No);

    // Print the entered numbers rounded in 2 decimal ( ex: x.xx )
    printf ("\n 1st No is %0.2f\n\n 2nd No is %.2f\n\n 3rd No is %.2f\n\n", First_No , Second_No ,Third_No);

    // Check and print the largest number
    if( First_No > Second_No) 
    {
      if ( First_No > Third_No)
      {
        printf( "\n \"%.2f\" is a Largest Number\n", First_No);
      }
    }
    else if ( Second_No > Third_No )
      {
        printf( "\n \"%.2f\" is a Largest Number\n", Second_No);
      }
      else
      {
        printf( "\n \"%0.2f\" is a Largest Number\n", Third_No);
      }
    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
