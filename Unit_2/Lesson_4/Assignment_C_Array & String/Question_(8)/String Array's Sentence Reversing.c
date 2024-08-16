#include <stdio.h>

#define MAX_Size 50  // Define the Maximum Size of the Array

     int main() 
     {
         int i = 0, Add = 0;
         char Str_First[MAX_Size];  // String Array
         char Str_Second[MAX_Size]; // String Array

         // Input the sentence
              printf("\nEnter The Sentence: ");
                 fgets(Str_First, MAX_Size, stdin);

          // Count the length of the string
         while (Str_First[Add] != '\0' && Str_First[Add] != '\n') 
             {
                 Add++;
             }

          // Reverse the string
         for (i = 0; i < Add; i++) 
         {
              Str_Second[i] = Str_First[Add - 1 - i];
         }

              Str_Second[Add] = '\0'; // Null-terminate the reversed string

         // Display the reversed string
             printf("\nThe Reverse Sentence is: %s\n", Str_Second);

         // Pause before exiting
             printf("\nProgram finished. Press any key to exit...\n");
             getchar(); // Wait for user input before closing
                 return 0;
     }
