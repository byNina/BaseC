// To disable deprecation: warning C4996: 'scanf': This function or variable may be unsafe.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <clocale>
#include <string.h>

#define SEPARATOR printf("\n\n");

////function declaration
void task_01(void);
void task_02(void);
void task_03(void);
void task_04(void);
void task_05(void);
void task_06(void);
void task_07(void);
void task_08(void);
void task_09(void);
void task_10(void);
void task_11(void);
void task_12(void);
void task_13(void);
void task_14(void);

int factorial(int);
long int toPow(long int, unsigned int);
double divide(int, int);

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
			//case 1:
			//	task_01();
			//	break;
			case 2:
				task_02();
				break;
			//case 3:
			//	task_03();
			//	break;
			case 4:
				task_04();
				break;
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
			//case 14:
			//	task_14();
			//	break;

			default:
				puts("Enter number from 1 till 12 or \"0\" to exit");
				break;
		}
		SEPARATOR
	}
}

/*
Задача 2. Написать функцию, которая считает факториал числа. Ввести 3 числа, посчитать сумму факториалов этих чисел.
*/
void task_02(void){
	int input;

	for(int i=0; i<3; ++i){
		puts("Enter positive integer number:");
		scanf("%d", &input);

		printf("!%d = %d", input, factorial(input));
		SEPARATOR
	}
}

int factorial(int input){
	return (input > 1) ? (input*factorial(input-1)) : 1;
}


/*
Задача 4. Функция, которая получает степень n и основание x и возвращает xn.
*/
void task_04(void){
	long int base;
	unsigned int pow;

	puts("Enter number to count power:");
	scanf("%ld", &base);
	puts("Enter positive integer power:");
	scanf("%d", &pow);
	
	printf("%ld^%d = %ld", base, pow, toPow(base, pow));

	SEPARATOR
}

long int toPow(long int x, unsigned int n){
	if (n==0){
        return 1;
	}else if (n==1){
        return x;
	}else if (n % 2 == 0 ){
        return toPow( x * x, n/2);
	}else{
        return toPow( x * x, n /2)*x;
	}
 }

/*
Задача 5. Функция получает 2 целых числа и возвращает результат деления этих чисел.
*/
void task_05(void){
	int input_1, input_2;

	puts("Enter first integer number:");
	scanf("%d", &input_1);

	puts("Enter second integer number:");
	scanf("%d", &input_2);

	printf("%d / %d = %lf", input_1, input_2, divide(input_1, input_2));
}

double divide(int x, int y){
	double result;

	if(){
		return;
	}
	return result

}