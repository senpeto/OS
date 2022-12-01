#include <stdio.h>
#include <locale.h>

void gameLogic(min, max, count, credits, deduction, common_prize, five_prize, seven_prize, sss_deduction) {
	int nums [count];
	while (credits >= deduction) {
	getch();
	credits -= deduction;
	int i;
	printf ("==================\n");
	printf ("Випала комбiнацiя:\n\n| ");
	for (i = 0; i < count; i++) {
	int num = (rand() % (max - min + 1)) + min;
	nums[i] = num;
	printf ("%d ", nums[i]);
	}
	printf ("|\n");
	/* 
	//тест джекпоту
	nums[0] = 7;
	nums[1] = 7;
	nums[2] = 7;
	*/
	switch (nums[0])
	{
		case 0:
			if (nums[1] == 0 && nums[2] == 0){
				credits += common_prize;
				printf("\nВiтаємо, вам нараховано %d кредитiв!\n", common_prize);
			}
			break;
		case 1:
			if (nums[1] == 1 && nums[2] == 1){
				credits += common_prize;
				printf("\nВiтаємо, вам нараховано %d кредитiв!\n", common_prize);
			}
			break;
		case 2:
			if (nums[1] == 2 && nums[2] == 2){
				credits += common_prize;
				printf("\nВiтаємо, вам нараховано %d кредитiв!\n", common_prize);
			}
			break;
		case 3:
			if (nums[1] == 3 && nums[2] == 3){
				credits += common_prize;
				printf("\nВiтаємо, вам наарховано %d кредитiв!\n", common_prize);
			}
			break;
		case 4:
			if (nums[1] == 4 && nums[2] == 4){
				credits += common_prize;
				printf("\nВiтаємо, вам нараховано %d кредитiв!\n", common_prize);
			}
			break;
		case 5:
			if (nums[1] == 5){
				if (nums[2] == 5) {
					credits += 3*five_prize;
					printf("\nТри п'ятiрки! Вам нараховано %d кредитiв!\n", 3*five_prize);
				}
				else {
					credits += 2*five_prize;
					printf("\nДвi п'ятiрки пiдряд! Вам нараховано %d кредитiв!\n", 2*five_prize);
				}
			}
			else {
				credits += five_prize;
				printf("\nП'ятiрка! Вам нараховано %d кредитiв!\n", five_prize);
			}
			break;
		case 6:
			if (nums[1] == 6 && nums[2] == 6){
				credits -= sss_deduction;
				printf("\nОу, ви були оштрафованi на %d кредитiв..\n", sss_deduction);
			}
			break;
		case 7:
			if (nums[1] == 7){
				if (nums[2] == 7) {
					credits += 1000*seven_prize;
					printf("\nТри сiмки! Джекпот!\n\nВам нараховано %d кредитiв!\n", 1000*seven_prize);
					printf ("\nВаш Баланс: %d\n\nДякуємо за гру!\n", credits);
					return;
				}
				else {
					credits += 5*seven_prize;
					printf("\nДвi сiмки пiдряд! Вам нараховано %d кредитiв!\n", 5*seven_prize);
				}
			}
			else {
				credits += seven_prize;
				printf("\nСiмка! Вам нараховано %d кредитiв!\n", seven_prize);
			}
			break;
		default: 
			printf("Щось пiшло не так, будь-ласка, перезапустiть програму..");
	}
	printf ("\nЗалишок кредитiв: %d\n", credits);
	printf ("==================\n\n");
	}
	printf("Недостатньо кредитiв для продовження.\n");
}

void gameHandler() {
	int min = 0;
	int max = 7;
	int count = 3;
	int credits = 5000;
	int deduction = 200;
	int common_prize = 350;
	int five_prize = 500;
	int seven_prize = 777;
	int sss_deduction = 666;
	
	printf ("------------------------------\n");
	printf("Вас вiтає гра Однорукий Бандит!\n\nНатиснiть будь-яку клавiшу для старту!\n");
	printf ("------------------------------\n");
	gameLogic (min, max, count, credits, deduction, common_prize, five_prize, seven_prize, sss_deduction);
	printf("\nЗавершення..");
}

int main() {
	setlocale(LC_ALL, "Ukrainian");
	srand(time(0));
	gameHandler ();
	return 0;
}
