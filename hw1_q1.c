/*
 * CS1111 Week2 Homework 1 
 *
 * @author Jackson Wiles
 * @email jcwiles@mtu.edu
 * @date 09/05/2024
 *
 */
#include <stdio.h>

int main() {
	int op1, op2;
	char opfunction;

	printf("Please enter an integer expression:");
	scanf("%d", &op1);
	scanf( "%c", &opfunction);
	scanf( "%d", &op2);
	printf("Operand 1: %d\n", op1);
	printf("Operand 2: %d\n", op2);
	printf("Operation: %c\n", opfunction);
}

