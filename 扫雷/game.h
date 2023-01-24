#pragma once
#define ROW 9
#define COL 9

#define EASY_COUNT 10
#define ROWS ROW+2
#define COLS COL+2
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);//初始
void DisplayBoard(char board[ROWS][COLS], int row, int col);//打印
void SetMine(char mine[ROWS][COLS], int row, int col);//布置
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//排查
