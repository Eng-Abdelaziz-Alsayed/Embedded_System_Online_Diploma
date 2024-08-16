#include <stdio.h>

int main() 
{
    int Fac_No , Result = 1 ;
    // Prompt the user to enter Number
    printf(" Enter your integer Number : ");

    // The Program will wait for User Input here (Number) (ex: x.xx)
    scanf("%d", &Fac_No); 

    // Check and print (Positive or Negative or Zero)
    if ( Fac_No > 1 )
    {
      for ( int i = 1 ; i <= Fac_No ; i++) 
    {
      Result *= i ;
    }
        printf( "\n Factirial of \"%d\" is \"%d\" \n", Fac_No , Result );
    }
    else if ( Fac_No == 0 || Fac_No == 1  )
    {
      printf( "\n Factirial of \"%d\" is \"1\" \n", Fac_No );
    }
    else if (Fac_No < 0) 
    {
     printf( "\n Error !!! Factirial of \"%d\" isn't exist ( Negative Number) \n", Fac_No , Result );  
    } 

    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
