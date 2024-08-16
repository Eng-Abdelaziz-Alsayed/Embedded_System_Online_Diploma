#include <stdio.h>

int main() 
{
    int Max_Num , Count = 0 ;
    float Num , Product = 1.0 ;
 

    // Loop to get user inputs (4 Only)
      for ( int i = 1 ; i <= 4 ; i++) 
    {
      printf ("\n Enter Value of Number \" %d \" : " , i );
      scanf ("%f",&Num);
      if ( Num == 0) 
      {
        continue;
      }
      Product *= Num;
      Count ++ ;
    }
        // Calculate the Product
      printf ("\n The Product of %d Input Numbers Correct is : %0.2f \n " , Count , Product );
    

    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
