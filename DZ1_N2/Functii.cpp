#include "Header.h"
void dwoich(int n)
{
	printf("Число %d после преобразования в 2-ую систему счисления\n", n);
	char buffer[33];
	itoa(n, buffer, 2);
	printf("%s\n", buffer);
	puts("");
	system("pause");
}

void vosmerichn(int n)
{
	printf("Число %d после преобразования в 8-ую систему счисления\n", n);
	char buffer[33];
	itoa(n, buffer, 8);
	printf("%s\n", buffer);
	puts("");
	system("pause");
}

void shestnadcerichn(int n)
{
	printf("Число %d после преобразования в 16-ую систему счисления\n", n);
	char buffer[33];
	itoa(n, buffer, 16);
	printf("%s\n", buffer);
	puts("");
	system("pause");
}

void menu(int n, int key_2)
{
	int kod_2;
	while (key_2 == 1)
	{
		system("cls");
		printf("Выберите какое действие Вы хотите произвести над числом %d\n\n", n);
		puts("1 - преобразование в 2-ую систему счисления");
		puts("2 - преобразование в 8-ую систему счисления");
		puts("3 - преобразование в 16-ую систему счисления");
		puts("4 - преобразовать другое число или выйти");
		scanf("%d", &kod_2);
		if ((kod_2 < 1) || (kod_2 > 4))
		{
			puts("Выберите пункт из меню");
			system("pause");
		}
		else
		{
			switch (kod_2)
			{
			case 1:
			{
				dwoich(n);
				break;
			}
			case 2:
			{
				vosmerichn(n);
				break;
			}
			case 3:
			{
				shestnadcerichn(n);
				break;
			}
			case 4:key_2 = 0; break;
			}
		}

	}

}
