#include "Header.h"

int main()
{
	setlocale(0, "russian");
	int kod, key = 1, key_2 = 1;
	while (key == 1)
	{
		system("cls");
		puts("Выберите один из пунктов меню\n");
		puts("1 - ввод числа для дальнейших преобразований");
		puts("2 - выход");
		scanf("%d", &kod);
		if ((kod < 1) || (kod > 2))
		{
			puts("Выберите пункт из меню");
			system("pause");
		}
		else
		{
			switch (kod)
			{
			case 1: {
				int n;
				system("cls");
				puts("Введите число");
				scanf("%d", &n);
				menu(n, key_2); system("pause");
				break; }
			default: key = 0;
			}
		}
	}
}