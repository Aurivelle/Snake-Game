#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "draw.h"
#include "input.h"

int main()
{
    setup(); // 初始化遊戲狀態

    while (!gameover)
    {
        draw();  // 繪製畫面
        input(); // 處理用戶輸入
        logic(); // 更新遊戲邏輯
    }
    if (gameover)
    {
        gameOverScreen();
    }

    return 0;
}