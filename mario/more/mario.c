#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numblocks = get_int("Please provide a number between 0 and 23: ");


    if ((numblocks < 0) || (numblocks > 23))
    {
        printf("Oops that doesn't work\n");
    }

    for (int i = 0; i < numblocks; i++)
    {
        for(int j = 0; j < (numblocks-i)- 1; j++)
        {
        printf(" ");
        }

        for(int j = 0; j < i +1; j++)
        {
            printf("#");
        }

        printf("  ");

        for(int j = 0; j < i +1; j++)
        {
            printf("#");
        }

        printf("\n");

    }
}