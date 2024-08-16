#include <stdio.h>

int main() 
{
   float  Check_No ;
    
    // Prompt the user to enter three numbers
    printf(" Enter your Number to check its Positive or Negaitive : ");

    // The Program will wait for User Input here (Number) (ex: x.xx)
    scanf("%f", &Check_No); 

    // Check and print (Positive or Negative or Zero) 
    if( Check_No > 0) 
    {
        printf( "\n \"%.2f\" is a Postive Number\n", Check_No);
      
    }
    else if ( Check_No < 0 )
      {
        printf( "\n \"%.2f\" is a Negative Number\n", Check_No);
      }
      else
      {
        printf( "\n You enter \"%0.0f\" \n", Check_No);
      }
    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
