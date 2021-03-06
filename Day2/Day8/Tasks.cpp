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

void task_21(void);

////custom function declaration
double** createMatrix(unsigned int N);
double sumUnderMainDiagonal(double**);
double multUnderMainDiagonal(double**);

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
			case 10:
				task_10();
				break;
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
			//case 21:
			//	task_21();
			//	break;

			default:
				puts("Enter number from 1 till 12 or \"0\" to exit");
				break;
		}
		SEPARATOR
	}
}

/*
Задача 2. Ввести строку и переписать ее в обратном порядке в новую строку.
*/
void task_02(void){
	char str[100], reversed[100];
	int i, j;

	puts("Enter string to reverse");
	gets(str);

	for (i = 0, j = strlen(str)-1; str[i] != '\0'; ++i){
		reversed[j] = str[i];
		--j;
	}
	reversed[strlen(str)] = '\0';

	puts(reversed);
}


/*
Задача 3. Ввести строку и заменить символ «а» на символ «!» в данной строке.
*/
//void task_03(void){
//	char str[100];
//	int i;
//
//	puts("Enter string to reverse");
//	gets(str);
//}

/*
Задача 4. Посчитать, сколько раз в словах встречается буква «а» и поменять первый и последний символы.
*/

void task_04(void){
	char str[100];
	char letter = 'a', temp;
	int i, k;

	puts("Enter string to find letter a:");
	gets(str);
	
	for(i=0, k=0; str[i]; ++i){
		if(str[i] == letter){
			++k;
		}
	}
	temp = str[0];
	str[0] = str[strlen(str)-1];
	str[strlen(str)-1] = temp;

	puts(str);
}

/*
Задача 10. Имеем 4 строки, например char x[20], y[20], z[20], t[80]; 
В первую строку вводим фамилию, во вторую имя, а в третью отчество и используя 
функции из библиотеки <string.h> записываем в строку z сначала фамилию, 
потом пробел, имя, пробел и отчество, пробел. Распечатываем только строку z.
*/
void task_10(void){
	char x[20], y[20], z[20], t[80]="\0";
	
	puts("Enter surname");
	gets(x);

	puts("Enter name");
	gets(y);
	
	puts("Enter otch");
	gets(z);

	strcat(t, x);
	strcat(t, " ");
	strcat(t, y);
	strcat(t, " ");
	strcat(t, z);

	puts(t);
}

/*
Задача 16. Ввести дату в строку следующим образом: 12/05/1956 и программа 
распечатывает строку следующим образом: 12 мая, 1956 года (использовать оператор switch).
*/
void task_16(void){
	char str[11];
	char buf[10]="\0";

	puts("Enter date:");
	scanf("%s",str);
	
	if(str[x] == '0'){
		switch(x[4]

	} else {
	
	}
	




}



/*
Задача 21. Дана действительная квадратная матрица порядка N (матрица выделяется динамически).
Найти сумму и произведение элементов, расположенных ниже главной диагонали.
*/

//void task_21(void){
//	unsigned int N;
//	double sum, mult;
//
//	puts("Enter matrix size:");
//	scanf("%d",&N);
//
//	double** matrix = createMatrix(N);
//
//	sum = sumUnderMainDiagonal(matrix, N);
//	mult = multUnderMainDiagonal(matrix, N);
//
//	printf("Sum = %lf",sum);
//	printf("Multiplication = %lf",mult);
//
//}
//
//double** createMatrix(unsigned int N){
//	int i;
//	double** ptx;
//	double* row;
//
//	ptx = (double**) calloc(N, sizeof(double*));
//
//	if(!ptx){
//		printf("Нет места!!!\n");
//		exit(1);
//	}
//	
//	for(i = 0; i < N; ++i){
//		row = (double*) calloc(N, sizeof(double));
//		if(!row){
//			printf("Нет места!!!\n");
//			exit(1);
//		}
//	}
//}
//
//
//double sumUnderMainDiagonal(double** matrix, int N){
//	int i, j;
//	double sum;
//
//	for (i=1; i < N; ++i){
//		for(j=0; j < i;++j){
//			sum += matrix[i][j];
//		}
//	}
//}
//
//double multUnderMainDiagonal(double** matrix, int N){
//	int i, j;
//	double mult;
//
//	for (i=1; i < N; ++i){
//		for(j=0; j < i;++j){
//			mult *= matrix[i][j];
//		}
//	}
//
//}
