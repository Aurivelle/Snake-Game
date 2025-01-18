#include <conio.h>
#include "game.h"

void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
        case 'A':
            flag = 1;
            break;
        case 's':
        case 'S':
            flag = 2;
            break;
        case 'd':
        case 'D':
            flag = 3;
            break;
        case 'w':
        case 'W':
            flag = 4;
            break;
        case 'x':
        case 'X':
            gameover = 1;
            break;
        }
    }
}
