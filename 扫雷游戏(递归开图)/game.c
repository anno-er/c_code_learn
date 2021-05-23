#include"game.h"


void Init_board(char board[ROWS][COLS], int row, int col,char set) {
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col) {
	int i = 0, j = 0;
	//打印列号
	for (i = 0; i <= row; i++) {
		printf("%d ",i);
	}
	printf("\n");

	for (i = 1; i <= row; i++) {
		printf("%d ", i); //打印行号
		for (j = 1; j <= col; j++) {
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count) {
		int x = rand() % row + 1; //x = 1~9
		int y = rand() % col + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}	
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	return mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x - 1][y] + mine[x + 1][y] +
		mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] - 8 * '0';  //返回x,y周围的雷数
}

void open_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y) {
	int count = get_mine_count(mine, x, y);//计算x,y坐标周围有几个雷
	if (count == 0) {
		show[x][y] = count + '0';
		if (x - 1 >= 1 && x - 1 <= ROW && y - 1 >= 1 && y - 1 <= COL && show[x-1][y-1] !='0' ) {
			open_mine(mine, show, x - 1, y - 1);
		}
		if (x >= 1 && x  <= ROW && y - 1 >= 1 && y - 1 <= COL && show[x][y-1] != '0') {
			open_mine(mine, show, x, y - 1);
		}
		if (x+1 >= 1 && x+1 <= ROW && y - 1 >= 1 && y - 1 <= COL && show[x+1][y-1] != '0') {
			open_mine(mine, show, x+1, y - 1);
		}
		if (x - 1 >= 1 && x - 1 <= ROW && y >= 1 && y <= COL && show[x-1][y] != '0') {
			open_mine(mine, show, x - 1, y );
		}
		if (x + 1 >= 1 && x + 1 <= ROW && y >= 1 && y <= COL && show[x+1][y] != '0') {
			open_mine(mine, show, x + 1, y);
		}
		if (x - 1 >= 1 && x - 1 <= ROW && y+1 >= 1 && y+1 <= COL && show[x-1][y+1] != '0') {
			open_mine(mine, show, x - 1, y+1);
		}
		if (x  >= 1 && x  <= ROW && y+1 >= 1 && y+1 <= COL && show[x][y+1] != '0') {
			open_mine(mine, show, x,y +1);
		}
		if (x + 1 >= 1 && x + 1 <= ROW && y+1 >= 1 && y+1 <= COL && show[x+1][y+1] != '0') {
			open_mine(mine, show, x + 1, y+1);
		}
	}
	else {
		show[x][y] = count + '0';
	}
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0, y = 0;
	int win = 0;
	while( win<row*col- EASY_COUNT ){
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				printf("很遗憾，你被炸死了！\n");
				Displayboard(mine, row, col);
				break;
			}
			else {
				open_mine(mine, show, x, y);
				Displayboard(show, row, col);
				win++;
			}
		}
		else {
			printf("输入坐标非法,请重新输入!\n");
		}
	}
	if (win == row * col - EASY_COUNT) {
		printf("恭喜你，排雷成功！\n");
		Displayboard(mine, ROW, COL);
	}
}

//展开
