// To disable deprecation: warning C4996: 'scanf': This function or variable may be unsafe.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <clocale>
#include <string.h>
#include <math.h>

#define SEPARATOR printf("\n\n");

////function declaration
void task_01(void);
void task_02(void);
void task_03(void);
//void task_04(void);
//void task_05(void);
//void task_06(void);
//void task_07(void);
//void task_08(void);
//void task_09(void);
//void task_10(void);
//void task_11(void);
//void task_12(void);
//void task_13(void);


void main(void){
	setlocale(LC_ALL,"Russian");

	short userChoice = 0;
	bool runApp = true;

	while(runApp){
		puts("\nPlease, enter a number of a task or \"0\" to exit");

		fflush(stdin);
		scanf("%hd",&userChoice);	
		fflush(stdin);

		switch(userChoice){
			case 0:
				runApp = false; //exit from application
				break;
			case 1:
				task_01();
				break;
			case 2:
				task_02();
				break;
			case 3:
				task_03();
				break;
			//case 4:
			//	task_04();
			//	break;
			//case 5:
			//	task_05();
			//	break;
			//case 6:
			//	task_06();
			//	break;
			//case 7:
			//	task_07();
			//	break;
			//case 8:
			//	task_08();
			//	break;
			//case 9:
			//	task_09();
			//	break;
			//case 10:
			//	task_10();
			//	break;
			//case 11:
			//	task_11();
			//	break;
			//case 12:
			//	task_12();
			//	break;
			//case 13:
			//	task_13();
			//	break;


			default:
				puts("Enter number from 1 till 12 or \"0\" to exit");
				break;
		}
		SEPARATOR
	}
}

double factorial(int input){
	int result = 1;

	if(input > 0 ){
		for (int i = 1; i <= input; ++i){
			result *= i;
		}
	} else {
		printf("ERROR. Number should be integer and positive.");
		return 0;
	}

	return result;
}

/*
Задача 1. Ввести целое неотрицательное число. Посчитать факториал данного числа.
*/

void task_01(void){
	int input = 0;
	 
	printf("Задача 1. Ввести целое неотрицательное число. Посчитать факториал данного числа.");
	SEPARATOR

	puts("Enter positive integer number:");
	scanf("%d",&input);
	printf("Init value: %d\n", input);
	
	double result = factorial(input);

	printf("Result value: %.lf", result);
}

/*
Задача 2. Введите два числа. Первое число x – основание, второе число – степень. Посчитать x^n.
*/

void task_02(void){
	double input_1 = 0;
	int input_2 = 0;

	printf("Задача 2. Введите два числа. Первое число x – основание, второе число – степень. Посчитать x^n.");
	SEPARATOR

	puts("Enter two integer numbers:");
	scanf("%lf%d",&input_1, &input_2);
	printf("Init values: %.lf in %d power\n", input_1, input_2);
	
	double result = pow(input_1, input_2);

	printf("Result value: %lf", result);
}

/*
Задача 3. Ввести целое неотрицательное число N. Используя один цикл, найти сумму 1! + 2! +…..+ N!
(выражение N! – это N факториал). Чтобы избежать целочисленного переполнения, проводить вычисления
с помощью вещественных переменных
*/

void task_03(void){
	int input = 0;
	double result = 0;

	printf("Задача 3. Ввести целое неотрицательное число N. Используя один цикл, найти сумму 1! + 2! +…..+ N!")	;
	printf("(выражение N! – это N факториал). Чтобы избежать целочисленного переполнения, проводить вычисления");
	printf("с помощью вещественных переменных");

	SEPARATOR

	puts("Enter positive integer number:");
	scanf("%d",&input);
	printf("Init value: %d \n", input);
	
	for (int i = 1; i <= input; ++i){
		result += factorial(i);
	}

	printf("Result value: %ld", result);
}







