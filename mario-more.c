#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Receive height specification
    // Prompt user (set up prompt) -> height of pyramid
    int height;
    // Re-prompt as necessary -> if answer is not greater than 0
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print pyramid of specified height
    for (int i = 0; i < height; i++)
    {
        // Print row(s) of bricks
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
