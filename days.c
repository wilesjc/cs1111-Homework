/*
 * CS1111 Week 3 Homework
 *
 * @author Jackson Wiles
 * @email jcwiles@mtu.edu
 * @date 9/16/2024
 *
 */

#include <stdio.h>

int main()
{
//Define Variables
	int inYear; //User inputted Year
	int inMonth; //User inputted Month
	int d; //User imputted Day
	int Y; //Shifted Year
	int m;  //Shifted Month
	int c; //First two digits of Y
	int y; //Last two digits of Y
	int w; //Number corresponding to the day of the week
	char *day; //Text string that is the day of the week

//User input and reading
	printf("Please enter the day [YYYY/Month/Day]:");
	scanf("%d/%d/%d", &inYear, &inMonth, &d);

//Check for and apply Month Shift	
	switch (inMonth)
{
		case 1:
		{
			m = inMonth + 12;
			Y = inYear - 1;
			//printf("Case 1\nm=%d, Y=%d\n", m, Y); //For switch case testing
			break;
		}
		case 2:
		{
			m = inMonth + 12;
			Y = inYear - 1;
			//printf("Case 2\nm=%d, Y=%d\n", m, Y); //For switch case testing
			break;
		}
		default:
		{
			m = inMonth;
			Y = inYear;
			//printf("Default\nm=%d, Y=%d\n", m, Y); //For switch case testing
		break;
		}
}
		
//Calculate c and y variables
{
	//c
	c = Y / 100;
	//printf("c value %d\n", c); //Value test
	
	//y
	y = Y % 100;
	//printf("y value %d\n", y); //Value test
}

//Final equation/calculating w
{
	w = (((13 * (m + 1)) / 5) + (y / 4) + (c / 4) + d + y - (2 * c)) % 7;
	//printf("w value %d\n", w); //Value test
}

//Assigning "day" variable to correct day and printing answer
	switch (w)
{
	case 0:
	{
		day = "Saturday";
		printf(day); printf("\n"); //Switch case test 0
		break;
	}
	case 1:
        {
                day = "Sunday";
                printf(day); printf("\n"); //Switch case test 1
                break;
        }
	case 2:
        {
                day = "Monday";
                printf(day); printf("\n"); //Switch case test 2
                break;
        }
	case 3:
        {
                day = "Tuesday";
                printf(day); printf("\n"); //Switch case test 3
                break;
        }
	case 4:
        {
                day = "Wednesday";
                printf(day); printf("\n"); //Switch case test 4
                break;
        }
	case 5:
        {
                day = "Thursday";
                printf(day); printf("\n"); //Switch case test 5
                break;
        }
	case 6:
        {
                day = "Friday";
                printf(day); printf("\n"); //Switch case test 6
                break;
        }
	default:
	{
		printf("Something went wrong, w not 0, 1, 2, 3, 4, 5, or 6\n"); //w calculation error
	}
}
return 0;
}

