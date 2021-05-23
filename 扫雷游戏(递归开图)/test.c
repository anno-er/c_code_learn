#include"game.h"
void menu() {
	printf("*********************************\n");
	printf("****   1.play       0.exit    ***\n");
	printf("*********************************\n");
}

void game() {
	//雷的信息存储--数组
	char mine[ROWS][COLS] = { 0 }; //11*11
	char show[ROWS][COLS] = { 0 };
	//初始化
	Init_board(mine, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');
	//打印棋盘
	Displayboard(show, ROW, COL);

	//布置雷
	setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//扫雷
	Findmine(mine,show, ROW, COL);
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
		}
	} while (input);
}


int main() {

	test ();
	return 0;
}