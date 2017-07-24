/*
subin
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gugudan();
void gugudan_1();
void gugudan_2();
void gugudan_3();
void gugudan_4();
void gugudan_5();
void gugudan_6();
void gugudan_7();
void shooting_star();



int main() {
	int choice;
	
	printf("choose one. \n");
	printf("1. rules of multiplication \n2. shooting star \n");
	scanf("%d", &choice);

	if (choice == 1) {
		gugudan();
	}
	else if (choice == 2) {
		shooting_star();
	}

	else
		printf("input error \n");

	return 0;
}

void gugudan() {
	int number;

	printf("input number \n");
	scanf("%d", &number);

	switch (number) {
	case 1:gugudan_1(); break;
	case 2:gugudan_2(); break;
	case 3:gugudan_3(); break;
	case 4:gugudan_4(); break;
	case 5:gugudan_5(); break;
	case 6:gugudan_6(); break;
	case 7:gugudan_7(); break;

	}
}

void gugudan_1() {
	int i;
	int j;
	for (i = 1; i < 2; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
	printf("\n");
}

void gugudan_2() {
	int i;
	int j;
	for (i = 1; i < 3; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

void gugudan_3() {
	int i;
	int j;
	for (i = 1; i < 4; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

void gugudan_4() {
	int i;
	int j;
	for (i = 1; i < 5; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

void gugudan_5() {
	int i;
	int j;
	for (i = 1; i < 6; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

void gugudan_6() {
	int i;
	int j;
	for (i = 1; i < 7; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

void gugudan_7() {
	int i;
	int j;
	for (i = 1; i < 8; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

void shooting_star() {
	int number = 0, i, j;
	number = rand() % 11 + 1;

	for (i = 0; i < number; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}