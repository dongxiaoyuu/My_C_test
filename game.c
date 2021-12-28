#include "minesweep.h"

void Menu()
{
	printf("#######################\n");
	printf("#  1.Play    2.Exit  ##\n");
	printf("#######################\n");
	printf("Please Select> ");
}

int main()
{
	srand((unsigned long)time(NULL));
	int quit = 0;
	while (!quit) {
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select) {
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("输入有误， 重新选择!\n");
			break;
		}
	}
	printf("ByeBye!\n");
	return 0;
}