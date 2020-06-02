#include <stdio.h>
#include <stdlib.h>

/*
Program to implement a simple calculator *****************************
* Author		Dept.		Date		Notes 
***********************************************************************
* Tahseen T.		Comp. Science.	Feb 19 2020	Initial version.
*/

int main(int argc, char *argv[])
{
	// makes sure that the number of arguments provided is 3
	if (argc != 4) {
		puts("Error: usage is simplecalc <x> <op> <y>");
		return 1;
	}
	// or else proceed to the program
	else {
	// takes in the first number
	int x = atoi(argv[1]);
	// takes in the the second number
	int y = atoi(argv[3]);
	// takes in the operator
	char op = argv[2][0];
	//performs the operations based on the given operator
	switch(op) {
		case '+': printf("%d\n", x+y);
			  return 0;
		case '-': printf("%d\n", x-y);
			  return 0;
		case '*': printf("%d\n", x*y);
			  return 0;
		case '/': printf("%d\n", x/y);
			  return 0;
	// if none of the above operators are provided, return an error message
		default:
			  printf("%c not a valid operator\n", op);
			  return 2;
		}
	}
}
