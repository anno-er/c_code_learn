#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10  //define����ǧ���ܼӷֺ�


void Init_board(char board[ROWS][COLS], int row, int col,char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);