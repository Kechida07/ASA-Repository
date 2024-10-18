/* 

Making use of the switch statement to check for vowels in an inputted character

Author: Amir Kechida

Date: 14/10/24 

*/

#include <stdio.h>

int main()
{
    char input = '0';


    printf("Please enter any character on your keyboard\n");

    scanf(" %c", &input);

    // this switch statement will check whether or not the user has entered a vowel
    switch (input)
    {
        case 'a':
        case 'A':

        case 'e':
        case 'E':

        case 'i':
        case 'I':

        case 'o':
        case 'O':

        case 'u':
        case 'U':
        {
            printf("The letter %c is a vowel.", input);
            break;
        }

        // this default statement serves to tell the user if they input something other than a vowel
        default:
        {
            printf("You entered %c, it is not a vowel.", input);
            break;
        }

    }

    return 0;

}