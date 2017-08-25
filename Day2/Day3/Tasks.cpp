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
void task_04(void);
void task_05(void);
void task_06(void);
void task_07(void);
void task_08(void);
void task_09(void);
void task_10(void);
void task_11(void);
void task_12(void);
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
			case 4:
				task_04();
				break;
			case 5:
				task_05();
				break;
			case 6:
				task_06();
				break;
			case 7:
				task_07();
				break;
			case 8:
				task_08();
				break;
			case 9:
				task_09();
				break;
			case 10:
				task_10();
				break;
			case 11:
				task_11();
				break;
			case 12:
				task_12();
				break;
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
	
	printf("Задача 3. Ввести целое неотрицательное число N. Используя один цикл, найти сумму 1! + 2! +…..+ N!")	;
	printf("(выражение N! – это N факториал). Чтобы избежать целочисленного переполнения, проводить вычисления");
	printf("с помощью вещественных переменных");

	SEPARATOR

	puts("Enter positive integer number:");
	scanf("%d",&input);
	printf("Init value: %d \n", input);	

	double result;
	if( input > 0){
		result = input; //2

		for (int i = input - 1; i > 0; --i){
			result = i*(1 + result);
		}
	}
	printf("Result value: %.lf", result);
}

/*
Задача 4. Введите целые положительные числа A и B (A < B). Вывести все целые числа от A до B
включительно, при этом каждое число должно выводиться столько раз, каково его значение (например,
число 3 выводится 3 раза).
*/
void task_04(void){
	int input_1 = 0;
	int input_2 = 0;
	
	printf("Задача 4. Введите целые положительные числа A и B (A < B). Вывести все целые числа от A до B")	;
	printf("включительно, при этом каждое число должно выводиться столько раз, каково его значение (например,");
	printf("число 3 выводится 3 раза).");

	SEPARATOR

	puts("Enter two positive integer number:");
	scanf("%d%d",&input_1, &input_2);
	printf("Init values: %d %d \n", input_1, input_2);	

	
	if( input_1 < input_2){
		puts("Result:");

		for (int i = input_1; i <= input_2; ++i){
			for (int j = 0; j < i; ++j){
				printf("%d ", i);
			}
			puts("");
		}
	}
}


/*
Задача 5. Ввести целое число и определить, является ли данное число совершенным или нет. Целое число
является совершенным, если его сомножители, включая 1 (но не само число), в сумме дают это число.
Например, 6 – это совершенное число, т.к. 6=1+2+3.
*/
void task_05(void){
	int input = 0;
		
	printf("Задача 5. Ввести целое число и определить, является ли данное число совершенным или нет. Целое число")	;
	printf("является совершенным, если его сомножители, включая 1 (но не само число), в сумме дают это число.");
	printf("Например, 6 – это совершенное число, т.к. 6=1+2+3.");

	SEPARATOR

	puts("Enter positive integer number:");
	scanf("%d",&input);
	printf("Init value: %d\n", input);	

	int sum = 0;

	for (int i = 1; i < input; ++i){
		if(input % i == 0){
			sum += i;
		}
	}

	if(input == sum){
		printf("Number %d is perfect!", input);
	} else {
		printf("Number %d isn't perfect.", input);
	}
}

/*
Задача 6. Вывести все простые числа в интервале от 2 до 10000.
*/
void task_06(void){

	printf("Задача 6. Вывести все простые числа в интервале от 2 до 10000.")	;
	
	SEPARATOR
	puts("Simple numbers:");


	for(int i = 2; i <=10000; ++i){
		bool isSimple = true;

		for(int j = 2; j < i; ++j){
			if(i%j == 0 ){
				isSimple = false;
				break;
			}
		}
		if(isSimple == true){
			printf("%d\n", i);
		}
	}
}


/*
Задача 7. Посчитать: количество нечетных, отрицательных чисел и произведение всех положительных
чисел, ввод чисел завершается, когда вводим 0.
*/
void task_07(void){
	int input = 0;

	printf("Задача 7. Посчитать: количество нечетных, отрицательных чисел и произведение всех положительных")	;
	printf("чисел, ввод чисел завершается, когда вводим 0.")	;
	
	SEPARATOR

	int mult = 1;
	int count = 0;

	do{
		scanf("%d",&input);
		if(input > 0){
			mult *= input;
		} else if(input < 0 && input % 2 != 0){
			count++;
		} else if (input == 0){
			break;
		}
	}while(true);

	printf("Result:\nmultiplication=%d\ncount=%d\n", mult, count);
}

/*
Задача 8. Вводим числа, ввод чисел заканчивается 0. Посчитать, сколько раз вводилось каждое из следующих чисел: -10, 5, 25 и 100.
*/
void task_08(void){
	int input = 0;

	printf("Задача 8. Вводим числа, ввод чисел заканчивается 0. Посчитать, сколько раз вводилось каждое из следующих чисел: -10, 5, 25 и 100.")	;
	
	SEPARATOR

	bool isStopped = false;
	int count_m10 = 0;  // count for -10
	int count_5 = 0;
	int count_25 = 0;
	int count_100 = 0;

	do{
		scanf("%d",&input);
		switch (input){
			case -10:
				count_m10++;
				break;
			case 5:
				count_5++;
				break;
			case 25:
				count_25++;
				break;
			case 100:
				count_100++;
				break;
			case 0:
				isStopped = true;
		}
		
	}while(!isStopped);

	printf("Result:\ncount -10 = %d\ncount 5 =%d\ncount 25 = %d\ncount 100 = %d\n", count_m10, count_5, count_25, count_100);
}

/*
Задача 9. Программа, которая находит наименьшее из нескольких вещественных чисел. Предполагается, что первое введенное число задает количество последующих вводимых чисел.
*/
void task_09(void){
	int input = 0;

	printf("Задача 9. Программа, которая находит наименьшее из нескольких вещественных чисел. Предполагается, что первое введенное число задает количество последующих вводимых чисел.")	;
	
	SEPARATOR

	puts("Enter positive integer number:");
	scanf("%d",&input);

	puts("Enter number to compare:");
	int value;
	int min;
	
	if (input > 0){

		scanf("%d", &value);
		min = value;

		for (int i = 0 ; i < (input - 1); ++i){
			scanf("%d", &value);
			min = (min <= value) ? min : value;
		}
	}
	
	printf("Result: %d\n", min);
}


/*
Задача 10. Ввести целое число и посчитать сумму и произведение цифр данного числа.
*/
void task_10(void){
	int input = 0;

	printf("Задача 10. Ввести целое число и посчитать сумму и произведение цифр данного числа.")	;
	
	SEPARATOR

	puts("Enter positive integer number:");
	scanf("%d",&input);
	printf("Input value: %d\n", input);

	int sum = 0;
	int mult = 1;

	if (input > 0){

		while (input > 0){
			sum += input%10;
			mult *= input%10;
			input = input/10;
		}
	}
	
	printf("Result: sum = %d multiplication = %d \n", sum, mult);
}

/*
Задача 11. Вводим число, затем вводим символ (‘+’, ‘-‘, ‘*’, ‘/’, ‘=’). Ввод завершается при вводе символа ‘=’ Программа считает и выводит результат введенного выражения.
*/
void task_11(void){

	//TODO

}

/*
Задача 12. Дано целое число N(>1). Вывести наименьшее из целых чисел K, для которых сумма 1+2+…+K будет больше или равна N, и саму эту сумму.
*/
void task_12(void){
	int input = 0;

	printf("Задача 12. Дано целое число N(>1). Вывести наименьшее из целых чисел K, для которых сумма 1+2+…+K будет больше или равна N, и саму эту сумму.")	;
	
	SEPARATOR

	puts("Enter positive integer number:");
	scanf("%d",&input);
	printf("Input value: %d\n", input);

	int sum = 0;
	int minK = 0;
	
	if (input > 0){

		for (int i = 1; i < input; sum = 0, ++i){
			for ( int j = 0; j <= i; ++j){
				sum += j;
			}

			if(sum >= input ){
				minK = i;
				break;
			}
		}
	}
	
	printf("Result: K = %d sum= %d \n", minK, sum);
}
