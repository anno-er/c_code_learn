#include"game.h"
void menu() {
	printf("*********************************\n");
	printf("****   1.play       0.exit    ***\n");
	printf("*********************************\n");
}

void game() {
	//�׵���Ϣ�洢--����
	char mine[ROWS][COLS] = { 0 }; //11*11
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Init_board(mine, ROWS, COLS, '0');
	Init_board(show, ROWS, COLS, '*');
	//��ӡ����
	Displayboard(show, ROW, COL);

	//������
	setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//ɨ��
	Findmine(mine,show, ROW, COL);
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
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


int main() {

	test ();
	return 0;
}