#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random character
char getRandomChar()
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$?/-_";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

// Function to generate a strong password
void generatePassword(int length)
{
    printf("\033[2J\033[H");  // Clear the terminal
    printf("\033[1;36m");     // Set text color to cyan
    printf("********* Strong Password Generator dev by kit4py ********* \n");
    printf("\033[0m");        // Reset text color
    printf("\n");

    srand(time(NULL));  // Seed the random number generator

    while (1)
    {
        printf("\033[1;35m");  // Set text color to magenta
        printf("Generated Password: ");
        printf("\033[1;32m");  // Set text color to green

        // Generate the password
        for (int i = 0; i < length; i++)
        {
            printf("%c", getRandomChar());
        }

        printf("\n");
        printf("\033[0m");  // Reset text color
        printf("\n");

        printf("\033[1;33m");  // Set text color to yellow
        printf("Do you want to generate another password? (y/n): ");
        printf("\033[0m");     // Reset text color

        char choice;
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N')
        {
            break;
        }

        printf("\n");
    }
}

int main()
{
    int passwordLength = 16;  // Length of the generated password

    generatePassword(passwordLength);

    return 0;
}
