#include "헤더.h"

void first_screen()
{
	int a = 3;
	char key;

	gotoxy(25, 15);
	printf("게임을 시작하려면 아무키나 누르세요..");
	gotoxy(29, 17);
	printf("MADE BY. Kang Yeon Joo");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 3);
		printf("     *            *     *        *            ***");
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 4);
		printf("  *******        * *    *     *******       **   **  *");
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 5);
		printf("    * *         *   *   *       * *           ***    *");
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 6);
		printf("   *   *       *     *  *      *   *           *     ****");
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 7);
		printf("***********                 ***********   ************");
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 8);
		printf("     *          *                *                   *");
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 9);
		printf("  *******       *             *******         ***");
		gotoxy(12, 3);
		
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 10);
		printf("  *     *       *             *     *       **   **");
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(15, 11);
		printf("  *******       *********     *******         ***");
		Sleep(200);
		if (_kbhit())
		{
			key = _getch();
			system("cls");
			break;
		}
		gotoxy(72, 3);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		gotoxy(72, 4);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		gotoxy(72, 5);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		gotoxy(72, 6);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		gotoxy(72, 7);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		gotoxy(72, 8);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		gotoxy(72, 9);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		gotoxy(72, 10);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		gotoxy(72, 11);
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		printf("                                                         ");
		Sleep(400);


	}


}