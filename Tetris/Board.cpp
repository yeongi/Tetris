#pragma once
#include "Board.h"
#include "GameStart.h"

void MainBoard::DrawScreen() {
    int x, y;

    for (x = 0; x < BW + 2; x++) {

        for (y = 0; y < BH + 2; y++) {

            gotoxy(BX + x * 2, BY + y);

            puts(arTile[this->MainBoardArray[x][y]]);

        }

    }
}