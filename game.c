#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include "game.h"
#include "utils.h"

int height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;

void gameOverScreen()
{
    system("cls");
    printf("########################\n");
    printf("#         GAME OVER    #\n");
    printf("#       Your Score: %d #\n", score);
    printf("#   Thanks for Playing #\n");
    printf("########################\n");
    printf("Press any key to quit\n");

    getch();
}
void setup()
{
    gameover = 0;
    x = height / 2;
    y = width / 2;

    generateFruitPosition(); // 生成初始水果位置

    score = 0;
}

void logic()
{
    Sleep(100);
    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }

    if (x <= 0 || x >= height - 1 || y <= 0 || y >= width - 1)
        gameover = 1;

    if (x == fruitx && y == fruity)
    {
        score += 10;
        generateFruitPosition(); // 更新水果位置
    }
}
