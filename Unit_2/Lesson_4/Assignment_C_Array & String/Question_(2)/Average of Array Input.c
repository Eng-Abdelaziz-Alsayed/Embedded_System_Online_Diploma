 #include <stdio.h>

 #define MAX_SIZE 100  // Define the maximum size of the array

     int main() 
     {
         int Num;
         float Sum = 0, Ave;
         float Element_Num[MAX_SIZE];  // Static array with a maximum size

             // Input the number of data points
         do 
         {
             printf("\nEnter the number of data points (1 to %d): ", MAX_SIZE);
                 scanf("%d", &Num);

             if (Num < 1 || Num > MAX_SIZE) 
             {
                 printf("\nInvalid number of data points. Please enter a number between 1 and %d.\n", MAX_SIZE);
             }
         } while (Num < 1 || Num > MAX_SIZE);

             // Input elements and calculate the sum
         for (int i = 0; i < Num; i++) 
             {
                 printf("\nNumber [%d]: ", i + 1);
                     scanf("%f", &Element_Num[i]);
                     Sum += Element_Num[i];
             }

             // Calculate the average
                 Ave = Sum / Num;
             printf("\nAverage of Numbers (Data Inputs): %.2f\n", Ave);

              // Pause before exiting
             printf("\nProgram finished. Press any key to exit...\n");
                 getchar(); // Consume the newline character left by the last scanf
                 getchar(); // Wait for user input before closing
                     return 0;
     }
