/*������������Ϸ*/
#include"������.h"


void menu() {
	printf("*********************************\n");
	printf("****   1.play       0.exit    ***\n");
	printf("*********************************\n");
}
void game() {
	char ret = 0;
	char board[ROW][COL] = {0};//�������飬����������Ϣ
	Init_board(board, ROW, COL);//��ʼ������
	Displayboard(board,ROW,COL);//��ʾ����
	//����
	while (1) {
	//�������
		playermove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C') {
			break;
		}
		system("cls");

	//��������
		computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL); //�ж���Ӯ
		if (ret != 'C') {
			break;
		}
	}	
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}	
	else if (ret == '#') 
	{
		printf("����Ӯ\n");
	}	
	else 
	{
		printf("ƽ��\n");
	}
	//Sleep(5000);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��:>"); 
		scanf("%d",&input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}