#include "���.h"

void get_name()
{
	char name[100];
	map();
	gotoxy(26,2);
	printf(" ******************************");
	gotoxy(26, 3);
	printf(" *                            *");
	gotoxy(26, 4);
	printf(" *                            *");
	gotoxy(26, 5);
	printf(" ******************************");
	gotoxy(30, 3);
	printf("�����տ� �����ϴ� ��!");
	gotoxy(39, 7);
	printf("  @@@");
	gotoxy(39, 8);
	printf(" @@@@@");
	gotoxy(39, 9);
	printf("  @@@");
	gotoxy(39, 10);
	printf("   @");
	gotoxy(39, 11);
	printf("@@@@@@@");
	gotoxy(39, 12);
	printf("   @ ");
	gotoxy(39, 13);
	printf("  @ @");
	gotoxy(39, 14);
	printf(" @   @");
	gotoxy(30, 4);
	printf("���� �̸��� ? ");
	gotoxy(32, 16);
	printf("Your Name:");
	gets_s(name, 100);

}
