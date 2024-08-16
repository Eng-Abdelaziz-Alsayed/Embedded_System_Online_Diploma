 #include <stdio.h>

 #define MAX_Size 100  // Define the Maximum Size of the Array

     int main() 
     {
         int i = 0 , Freq = 0 ;
         char Letter ;
         char Str_Wo[MAX_Size]; // String Array

             // Input the sentence
             printf("\n Enter The Sentence : ");
                 fgets(Str_Wo,MAX_Size, stdin);
  
            // Input the character to find its frequency
             printf("\n Enter a Character to find Frequency : ");
                 scanf(" %c", &Letter);

             // Count the frequency of the character
             while ( Str_Wo[i]!= '\0') 
             {
                if (Str_Wo[i] == Letter)
                 {
                    Freq++;
                 }    
                     i++;
             }
             // Display the frequency of the character
                 printf("\n The Frequency of '%c' is: %d\n", Letter, Freq);

             // Pause before exiting
             printf("\n Program finished. Press any key to exit...\n");
                  getchar(); // Consume the newline character left by the last scanf
                  getchar(); // Wait for user input before closing
             return 0;
     }
