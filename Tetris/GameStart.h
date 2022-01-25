#pragma once
#include "Board.h"
#include "TetrisAction.h"
#include <Windows.h>
#include <iostream>
#include <string>

//��������
const int LEFT = 75;
const int RIGHT = 77;
const int UP = 72;
const int DOWN = 80;
const int ESC = 27;
const int BX = 5; //�׸��� ���� ��ǥ
const int BY = 1; //�׸��� ���� ��ǥ
const int BW = 10;
const int BH = 20;

struct Point {

    int x, y;

};

Point Shape[][4][4] = {

     { {0,0,1,0,2,0,-1,0}, {0,0,0,1,0,-1,0,-2}, {0,0,1,0,2,0,-1,0}, {0,0,0,1,0,-1,0,-2} },

     { {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1}, {0,0,1,0,0,1,1,1} },

     { {0,0,-1,0,0,-1,1,-1}, {0,0,0,1,-1,0,-1,-1}, {0,0,-1,0,0,-1,1,-1}, {0,0,0,1,-1,0,-1,-1} },

     { {0,0,-1,-1,0,-1,1,0}, {0,0,-1,0,-1,1,0,-1}, {0,0,-1,-1,0,-1,1,0}, {0,0,-1,0,-1,1,0,-1} },

     { {0,0,-1,0,1,0,-1,-1}, {0,0,0,-1,0,1,-1,1}, {0,0,-1,0,1,0,1,1}, {0,0,0,-1,0,1,1,-1} },

     { {0,0,1,0,-1,0,1,-1}, {0,0,0,1,0,-1,-1,-1}, {0,0,1,0,-1,0,-1,1}, {0,0,0,-1,0,1,1,1} },

     { {0,0,-1,0,1,0,0,1}, {0,0,0,-1,0,1,1,0}, {0,0,-1,0,1,0,0,-1}, {0,0,-1,0,0,-1,0,1} },

};

enum { EMPTY, BRICK, WALL };
const char *arTile[] = { ". ","��","��" };

int nx, ny;
void gotoxy(int x, int y);

class GameStart
{
	private:
		MainBoard screen;// ���� 3�� ������ ��.
		TetrisAction TA;
	public:
		void Init();
		void TetrisStart();
};

