/*测试三子棋游戏*/
#include"三字棋.h"


void menu() {
	printf("*********************************\n");
	printf("****   1.play       0.exit    ***\n");
	printf("*********************************\n");
}
void game() {
	char ret = 0;
	char board[ROW][COL] = {0};//创建数组，保存棋盘信息
	Init_board(board, ROW, COL);//初始化棋盘
	Displayboard(board,ROW,COL);//显示棋盘
	//下棋
	while (1) {
	//玩家下棋
		playermove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判读输赢
		if (ret != 'C') {
			break;
		}
		system("cls");

	//电脑下棋
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL); //判读输赢
		if (ret != 'C') {
			break;
		}
	}	
	if (ret == '*')
	{
		printf("玩家赢\n");
	}	
	else if (ret == '#') 
	{
		printf("电脑赢\n");
	}	
	else 
	{
		printf("平局\n");
	}
	//Sleep(5000);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:>"); 
		scanf("%d",&input);
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

int main()
{
	test();
	return 0;
}