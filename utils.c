#include <stdlib.h>
#include "game.h"

void generateFruitPosition()
{
    do
    {
        fruitx = rand() % height;
    } while (fruitx == 0 || fruitx == height - 1);

    do
    {
        fruity = rand() % width;
    } while (fruity == 0 || fruity == width - 1);
}
