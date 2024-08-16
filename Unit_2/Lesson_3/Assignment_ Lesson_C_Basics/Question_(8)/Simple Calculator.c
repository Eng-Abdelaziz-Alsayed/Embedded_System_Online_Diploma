#include <stdio.h>

int main() 
{
    char Check_Operator;
    float First_Op, Second_Op, Result;
    
    // Prompt the user to enter an arithmetic operator
    printf("Enter your arithmetic operator (\"*\", \"/\", \"+\", \"-\"): ");
    scanf(" %c", &Check_Operator);

    // Prompt the user to enter two operands
    printf("Enter your two operands: \n");
    scanf("%f", &First_Op);
    scanf("%f", &Second_Op);

    // Perform the operation based on the operator
    if (Check_Operator == '*') 
    {
        Result = First_Op * Second_Op;
        printf("\n\"%0.2f\" * \"%0.2f\" = \"%0.2f\"\n", First_Op, Second_Op, Result);
    }
    else if (Check_Operator == '/') 
    {
        if (Second_Op != 0) 
        {
            Result = First_Op / Second_Op;
            printf("\n\"%0.2f\" / \"%0.2f\" = \"%0.2f\"\n", First_Op, Second_Op, Result);
        } 
        else 
        {
            printf("\nError! Division by zero is not allowed.\n");
        }
    }
    else if (Check_Operator == '+') 
    {
        Result = First_Op + Second_Op;
        printf("\n\"%0.2f\" + \"%0.2f\" = \"%0.2f\"\n", First_Op, Second_Op, Result);
    }
    else if (Check_Operator == '-') 
    {
        Result = First_Op - Second_Op;
        printf("\n\"%0.2f\" - \"%0.2f\" = \"%0.2f\"\n", First_Op, Second_Op, Result);
    }
    else 
    {
        printf("\nError! Operator \"%c\" is not supported.\n", Check_Operator);
    }

    // Ensure output is visible and wait for user input
    printf("\nProgram finished. Press Enter to exit...\n");
    getchar(); // Consume the newline character left by the last scanf
    getchar(); // Wait for user input before closing

    return 0;
}
