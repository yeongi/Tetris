#include "GameStart.h"
#include <Windows.h>


void GameStart::gotoxy(int x, int y)
{//Windows.h 헤더 포함
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void GameStart::Init() {
	MainBoard a;
	UserBoard b(BX,BY);
	PreViewBoard c(BX, BY);
	//보드 그리기
	a.DrawScreen(a.MainBoardArray);
	a.DrawScreen(b.UserBoardArray);
	a.DrawScreen(c.PreviewBoardArray);
}