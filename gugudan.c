/*
subin
*/

#include <stdio.h>

void gugudan();
void gugudan_1();
void gugudan_2();
void gugudan_3();
void gugudan_4();
void gugudan_5();



int main() {
	int choice;
	
	printf("choose one. \n");
	printf("1. rules of multiplication \n");
	scanf("%d", &choice);

	if (choice == 1) {
		gugudan();
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

