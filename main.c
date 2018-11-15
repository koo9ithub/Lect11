#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int addfunc(int a, int b){
	return a+b;
}

int subfunc(int a, int b){
	return a-b;
}

int mulfunc(int a, int b){
	return a*b;
}

int divfunc(int a, int b){
	return a/b;
}

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	char oper;
	int (*pf)(int, int);
	
	
	printf("Input three numbers (number, operator, number): ");
	scanf("%i %c %i", &num1, &oper, &num2);	
	
	switch(oper)
	{
		case '+':
			pf = addfunc;
			break;
			
		case '-':
			pf = subfunc;
			break;
			
		case '*':
			pf = mulfunc;
			break;
			
		case '/':
			pf = divfunc;
			break;
	}
	
	printf("result : %i\n", pf(num1, num2));
	return 0;
}
