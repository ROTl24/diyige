#pragma once
#define ROW 9
#define COL 9

#define EASY_COUNT 10
#define ROWS ROW+2
#define COLS COL+2
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);//��ʼ
void DisplayBoard(char board[ROWS][COLS], int row, int col);//��ӡ
void SetMine(char mine[ROWS][COLS], int row, int col);//����
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//�Ų�
