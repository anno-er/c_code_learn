#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

//��������
void Init_board(char board[ROW][COL], int row, int col);//��ʼ��
void Displayboard(char board[ROW][COL], int row, int col);//��ʾ
void playermove(char board[ROW][COL], int row, int col);//�������
void computermove(char board[ROW][COL], int row, int col);//�������


/*
"*":���win
"#":����win
"Q":ƽ��
"C":����
*/
char IsWin(char board[ROW][COL], int row, int col);
