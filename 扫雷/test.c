#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//�׵���Ϣ�洢 
	//д�������飺
	//1�������Ų��úõ��׵���Ϣ
	//1���������Ų�����׵���Ϣ
	//�����ʵ��9 * 9�����̣�����Ĵ�С��Ƴ�11 * 11�ȽϺ�
	char mine[ROWS][COLS]={0};//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS]={0};//����Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ������

	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}
void menu()
{
	printf("*******************************\n");
	printf("******     1.play   ***********\n");
	printf("******     0.exit   ***********\n");
	printf("*******************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}