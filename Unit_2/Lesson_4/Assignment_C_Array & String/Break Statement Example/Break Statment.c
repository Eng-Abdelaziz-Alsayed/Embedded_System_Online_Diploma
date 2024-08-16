#include <stdio.h>

int main() 
{
    int Max_Sum , Count = 0 ;
    float Num , Sum = 0.0 , Ave_No ;

    // Prompt the user to enter Number
    printf(" Enter Max Number of Inputs ( Integer Number ) : ");

    // The program will wait for user input here
     scanf("%d", &Max_Sum); 

    // Loop to get user inputs
      for ( int i = 1 ; i <= Max_Sum ; i++) 
    {
      printf ("\n Enter Value of Number \" %d \" : " , i );
      scanf ("%f",&Num);
      if ( Num < 0.0 ) 
      {
        break;
      }
       Sum += Num;
       Count ++ ; 
    }
        // Calculate the average
     if ( Count > 0 ) 
      {
        Ave_No = Sum / Count ;
      printf ("\n The Average of %d Input Numbers Correct ( Positive Only )  is : %0.2f \n " , Count , Ave_No );
      }
      else 
      {
      printf ("\n Valid Inputs Weren't Provided. \n" );
      } 

    // Ensure output is visible and wait for user input
    printf("\n Program finished. Press Enter any Key to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing
}
