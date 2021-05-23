#include"������.h"


void Init_board(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col) {
	int i = 0,j=0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			//��ӡ
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}	
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}

}
/*
	   |   |
	---|---|---
	   |   |
	---|---|---
	   |   |
*/

void playermove(char board[ROW][COL], int row, int col) {
	int x, y;

	
	while (1) {
		printf("���/����������:>");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ��,����������\n");
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
}

void computermove(char board[ROW][COL], int row, int col) {
	int x, y;
	while (1) {
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}
	}
}
//1:���� 0��û��
int IsFull(char board[ROW][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	//������
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
			return board[i][0];
		}
	}
	//������
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
		return board[0][0];
	}
	//�ж�ƽ��
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}