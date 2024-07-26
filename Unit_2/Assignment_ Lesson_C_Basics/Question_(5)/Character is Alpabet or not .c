#include <stdio.h>

int main() 
{
   char Check_Alphabet ;
    
    // Prompt the user to enter three numbers
    printf(" Enter your Character : ");

    // The Program will wait for User Input here (Number) (ex: x.xx)
    scanf("%c", &Check_Alphabet); 

    // Check and print (Positive or Negative or Zero) 
    if( Check_Alphabet >= 'A' && Check_Alphabet <= 'Z'|| 
        Check_Alphabet >= 'a' && Check_Alphabet <= 'z' ) 
    {
      printf( "\n \"%c\" is an Alphabet\n", Check_Alphabet);
      
    }
    else
      {
        printf( "\n \"%c\" isn't an Alphabet\n", Check_Alphabet);

      }
    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
