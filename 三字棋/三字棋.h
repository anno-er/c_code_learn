#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

//函数声明
void Init_board(char board[ROW][COL], int row, int col);//初始化
void Displayboard(char board[ROW][COL], int row, int col);//显示
void playermove(char board[ROW][COL], int row, int col);//玩家下棋
void computermove(char board[ROW][COL], int row, int col);//玩家下棋


/*
"*":玩家win
"#":电脑win
"Q":平局
"C":继续
*/
char IsWin(char board[ROW][COL], int row, int col);
