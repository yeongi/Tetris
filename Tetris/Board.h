#pragma once
#include "GameStart.h"

class MainBoard
{
	public:
		MainBoard(int x = BX, int y = BY);
		int MainBoardArray[BW + 2][BH + 2];
		void DrawScreen(int *a[][22]);
	private:
		
};

class UserBoard 
{
	public:
		UserBoard(int x, int y);
		int UserBoardArray[BW / 2 + 2][BH / 2 + 2];
	private:
		

};

class PreViewBoard 
{
	public:
		PreViewBoard(int x, int y);
		int PreviewBoardArray[BW / 2 + 2][BH / 2 + 2];
	private:
		

};




