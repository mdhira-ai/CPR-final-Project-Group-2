#include "fundamentals.h"

void fundamentals()
{
    /* Version 1 */
    char buffer1[80];                                                                             // an array is declared with 80 elements, named buffer1
    char num_input[10];                                                                           // a string of characters is declared with 10 elements, named num_input
    unsigned int position;                                                                        // an unsigned integer named position is declared
    printf("Type not empty string (q - to quit) :\n");                                            // prompt the user to type a not empty string
    printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n"); // show this sequence
    gets(buffer1);                                                                                // scan the user input
    while (strcmp(buffer1, "q") != 0)                                                             // while the user does not enter 'q', do:
    {
        printf("Type the character position between the string:\n"); // prompt the user to type the char position inside the strings
        gets(num_input);                                             // get the input from the user
        position = atoi(num_input);                                  // invoke the function
        if (position >= strlen(buffer1))                             // if position is greater or equal to the string length, do:
        {
            position = strlen(buffer1) - 1;                            // invoke the function and subtract 1
            printf("Too big... Position reduced to max. available\n"); // print the error message to the screen
        }
        printf("The character found at %d position is \'%c\'\n", position, buffer1[position]); // display the position and the character
        printf("Type not empty string (q -to quit):\n");
        printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
        gets(buffer1);
    }
    printf("*** End of Indexing Strings Demo***\n\n"); // display the end of the program

    /* Version 2 */
    printf("*** Start of Measuring Strings Demo ***\n"); // show the start of the program
    char buffer2[80];                                    // declare a string of characters with 80 elements
    printf("Type a string (q - to quit):\n");            // prompt the user to type a string
    gets(buffer2);                                       // get the input
    while (strcmp(buffer2, "q") != 0)                    // if the user does not type 'q', do:
    {
        printf("The length is %lu\n", strlen(buffer2)); // show the length of the string
        printf("Type a string (q - to quit):\n");
        gets(buffer2);
    }
    printf("*** End of Measuring Strings Demo ***\n\n"); // show the end of the program

    /* Version 3 */
    >> insert here
}