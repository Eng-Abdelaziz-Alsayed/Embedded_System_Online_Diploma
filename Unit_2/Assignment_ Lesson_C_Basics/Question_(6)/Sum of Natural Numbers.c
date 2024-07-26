#include <stdio.h>

int main() 
{
    int Sum_No , Sum = 0 ;
    // Prompt the user to enter Number
    printf(" Enter your integer Number : ");

    // The Program will wait for User Input here (Number) (ex: x.xx)
    scanf("%d", &Sum_No); 

    // Check and print (Positive or Negative or Zero) 
    for ( int i = 0 ; i <= Sum_No ; i++) 
    {
      Sum += i ;
    }
      printf( "\n Sum of Natural Numbers to reach \"%d\" is \"%d\" \n", Sum_No , Sum ); 

    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
