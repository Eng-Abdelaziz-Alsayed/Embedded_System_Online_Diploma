 #include <stdio.h>

 #define MAX_ROW 100  // Define the Maximum Size of Row of the Array
 #define MAX_COLUMN 100  // Define the maximum Size of Cloumn of the Array

     int main() 
     {
         int Num_R , Num_C;
         float Element_Ma [MAX_ROW][MAX_COLUMN] ; // Matrix 
         float Element_Ma_T [MAX_ROW][MAX_COLUMN];  // Transpose Matrix

             // Input the number of rows and columns
         do 
         { 
             printf("\n Enter The Number of Rows of Matrix : ");
                 scanf("%d", &Num_R);

             printf("\n Enter The Number of Cloumns of Matrix : ");
                 scanf("%d", &Num_C);

             // Validate the number of rows and columns

             if (Num_R < 1 || Num_C < 1 || Num_R > MAX_ROW || Num_C > MAX_COLUMN) 
                 {
                     printf("\n\" Invalid number of rows or columns!!! \"\n"); 
                     printf("\n\" Please enter values between 1 and %d for rows and between 1 and %d for columns \"\n", MAX_ROW, MAX_COLUMN);
                 }
         } while (Num_R < 1 || Num_C < 1 || Num_R > MAX_ROW || Num_C > MAX_COLUMN);

             // Input elements for the matrix
         for (int i = 0 ; i < Num_R ; i++) 
             {
                 for (int j = 0 ; j < Num_C ; j++)
                 {
                     printf("\n Number [%d][%d]: ", i , j);
                         scanf("%f", &Element_Ma [i][j]); 
                 }
             }    
         
             // Display the original matrix
                 printf("\n Entered Matrix [%d][%d]: \n", Num_R , Num_C);

         for (int i = 0 ; i < Num_R ; i++) 
            {
                 for (int j = 0 ; j < Num_C ; j++)
                 {
                     printf(" %0.2f\t",Element_Ma [i][j]);
                 }
                     printf("\n");
             }
         
             // Compute and display the transpose of the matrix
                 printf("\n Transpose Matrix [%d][%d]: \n", Num_C , Num_R);

         for (int i = 0 ; i < Num_C ; i++) 
             {
                 for (int j = 0 ; j < Num_R ; j++)
                 {
                     Element_Ma_T[i][j] = Element_Ma[j][i];
                     printf(" %0.2f\t",Element_Ma_T [i][j]);
                 }
                     printf("\n");
             }
             // Pause before exiting
                 printf("\nProgram finished. Press any key to exit...\n");
                     getchar(); // Consume the newline character left by the last scanf
                     getchar(); // Wait for user input before closing
                         return 0;
     }
