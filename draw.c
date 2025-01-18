#include <stdio.h>
#include <stdlib.h>
#include "game.h"

void draw()
{
    system("cls");
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                printf("#");
            }
            else if (i == x && j == y)
            {
                printf("O");
            }
            else if (i == fruitx && j == fruity)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Score = %d\n", score);
    printf("Press X to quit the game\n");
}
