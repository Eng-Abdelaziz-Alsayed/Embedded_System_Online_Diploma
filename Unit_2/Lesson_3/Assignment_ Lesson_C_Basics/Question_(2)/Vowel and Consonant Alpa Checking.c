#include <stdio.h>

int main() 
{
    char Check_Alphabet;
    
    printf(" Enter an Alphabet to check if it is a Vowel or Consonant : ");
    scanf("%c", &Check_Alphabet); // The program will wait for user input here letter

    if( Check_Alphabet == 'A' || Check_Alphabet == 'a'|| Check_Alphabet == 'E' || Check_Alphabet == 'e' ||  Check_Alphabet == 'I'||  
        Check_Alphabet == 'i' || Check_Alphabet == 'O'|| Check_Alphabet == 'o' || Check_Alphabet == 'U' ||  Check_Alphabet == 'u' ) 
    {
        printf( "\n \"%c\" is a Vowel Letter\n", Check_Alphabet);
    }
    else if ( Check_Alphabet >= 'A' && Check_Alphabet <= 'Z' || Check_Alphabet >= 'a' && Check_Alphabet <= 'z' )
      {
        printf( "\n \"%c\" is a Consonant Letter\n", Check_Alphabet);
      }
      else
      {
        printf( "\n \"%c\" isn't a Letter\n", Check_Alphabet);
      }
    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
