 #include <stdio.h>

 #define MAX_Size 100  // Define the Maximum Size of the Array

     int main() 
     {
         int Ele_Ser, Ele_Num, Ele_Loc;
         int Element_Ar[MAX_Size]; // Elements Array

             // Input the number of elements
         do 
         { 
             printf("\n Enter The Number of Elements : ");
                 scanf("%d", &Ele_Num);

             // Validate the number of elements
             if (Ele_Num < 1 || Ele_Num > MAX_Size) 
             {
                 printf("\n\" Invalid Number of Elements!!!\"\n"); 
                 printf("\n\" Please Enter Values between 1 and %d \"\n", MAX_Size);
             }
         } while (Ele_Num < 1 || Ele_Num > MAX_Size);

             // Input elements for the array
                  printf("\n Array's Elements \n");
             for (int i = 0; i < Ele_Num; i++) 
             {
                 Element_Ar[i] = (i+1) * 11;    
                 printf(" %d\t", Element_Ar[i]); 
             }

             // Input the element to be inserted and the location
                 printf("\n\n Enter the Element Value to be Searched: ");
                     scanf("%d", &Ele_Ser);
             // Shift elements to the right to make space for the new element
              for (int i = 0 ; i < Ele_Num ; i++) 
             {
                if ( Element_Ar[i] == Ele_Ser )
                 {
                     printf("\n Number Founded At location : %d", i+1);
                         break;
                 }
             }
        
             // Pause before exiting
             printf("\n Program finished. Press any key to exit...\n");
                  getchar(); // Consume the newline character left by the last scanf
                  getchar(); // Wait for user input before closing
             return 0;
     }
