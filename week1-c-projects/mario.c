// iclude libraries used
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // specification of height as an int used further in the code
    int height, row, columns, space;
    // prompt user for height of the pyramid untill a valid height is entered in range 1-8 both
    // inclusive
    do
    {
        height = get_int("enter the height of the pyramid [1-8]: ");
    }
    while (height < 1 || height > 8);
    // to obain desied height of the pyramid using for loop
    for (row = 0; row < height; row++)
    {
        // to get spaces before hashes therefor invert the pyramid
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        // to get columns according to row
        for (columns = 0; columns <= row; columns++)
        {
            printf("#");
        }
        // switch to next line after each row
        printf("\n");
    }
}
