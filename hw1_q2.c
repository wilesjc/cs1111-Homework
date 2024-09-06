/*
 * CS1111 Week2 Homework 1 
 *
 * @author Jackson Wiles
 * @email jcwiles@mtu.edu
 * @date 09/06/2024
 *
 */
#include <stdio.h>

int main() {
	double op1, op2;
	char opfunction;

	printf("Please enter a real number expression:");
	scanf("%.2f %c %.2f", &op1, &opfunction, &op2);
	printf("Operand 1: %.2f\nOperand 2: %.2f\nOperation: %c\n", op1, opfunction, op2);
}

