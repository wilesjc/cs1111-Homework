/* Ask a user specified amount of math problems involving two random numbers between 0-99 using the "+" and "-" operators at random, and informing the user with how many questions they answered correctly.
 *
 * Week 4 Quiz
 *
 * @author: Jackson Wiles
 * @email: jcwiles@mtu.edu
 * @date: 9/29/2024
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
//Seed Randomness
	srand(time(NULL));

//Declare Variables
	int numQuest; //Number or requested questions
	int i=0; //Counter
	int n1; //First number in question
	int n2; //Second Number in question
	int op; //Determines what operator is used in question
	int sol; //The solution to the quesiton
	int solIn; //User inputted sollution
	int yesCount=0; //Counts the number of questions the user answers correctly

//Ask for questions
	printf("How many questions would you like to answer?\n");
	scanf("%d", &numQuest);
//	printf("Input test: %d\n", numQuest); //Input Test

//Give Questions loop
	while(i < numQuest)
	{
		i++; //Increment counter
		
		//Generate random numbers
		n1 = rand() % 100; //Generates first number
		n2 = rand() % 100; //Generates second number
		op = rand() % 2; //Generates value associated with "+" and "-" operators
//		printf("Randoms:\nn1: %d\nn2: %d\nop: %d\n", n1, n2, op); //Random Test

		//Determine whether the question is an addition or subtraction question
		switch(op)
		{
			case 0: //Addition
			{
				sol = n1 + n2;
//				printf("Solution: %d\n", sol); //Math test
				printf("\n%d + %d = ", n1, n2, op);
				break;
			}
			case 1: //Subtraction
			{
				sol = n1 - n2;
//				printf("Solution: %d\n", sol); //Math test
				printf("\n%d - %d = ", n1, n2, op);
				break;
			}
			default:
			{
				printf("Something terrible has happened"); //Error statement if neither addition or subtraction were chosen
			}
		}
		scanf("%d", &solIn); //Read user solution
//		printf("%d\n", solIn); //Scan Test

		//Check if user solution is correct
		if (solIn == sol)
		{
			//User was correct
			yesCount++;
//			printf("Correct count: %d\n", yesCount); //Increment test
		}
		else
		{
		}
	}
//Print final score
	printf("You got %d/%d correct.\n", yesCount, numQuest);

return 0;
}
