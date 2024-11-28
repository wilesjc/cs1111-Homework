/*
 * This program takes a specifically formatted text file as a command line 
 * 	input and displays the information is a sorted way
 *
 *@author Jackson Wiles
 *@email jcwiles@mtu.edu
 *@date 11/27/2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//Create Structure for storing Student data
	struct Student_t
	{
		int id;
		char name[20];
		char bday[10];
		int checked;
	};
	typedef struct Student_t student;

	//Make an array of students that can be itterated through for reading and 
	//comparing data later
	student studentA[10];

	//Open file so data can be read
	FILE *dataF;
	dataF = fopen( "student.txt", "r" );

	//Make sure the file was opened so the rest of the code can work 
	//properly
	if ( dataF == NULL )
	{
		printf( "That file didn't open!\n" );
		return -1;
	}

	//Set the values of the Student array to false
	for ( int i = 0; i < 10; i++ )
	{
		studentA[i].checked = 0;
	}


	//Read data from file to compare birthdates eventually
	for ( int i = 0; i < 10; i++ )
	{
		fscanf( dataF, "%d %19s %9s", 
				&studentA[i].id, &studentA[i].name, &studentA[i].bday );
	}
	//Compare each student's birthday to check for duplicates + print out matches
	char tempBD[10];
	for ( int done = 0, i = 0; done < 10; )
	{
		//Make sure not to process students twice
		if (studentA[i].checked == 1 )
		{
			i++;
		}
		else
		{
			strcpy( tempBD, studentA[i].bday );
			printf( "\n%s: %s(%d)", tempBD, studentA[i].name, studentA[i].id );
			studentA[i].checked = 1;
			done++;

			//Check for duplicate birthdays
			for ( int j = 0; j < 10; )
			{
				//Make sure not to process students twice
				if ( studentA[j].checked == 1 )
				{
					j++;
				}
				else if ( strcmp( tempBD, studentA[j].bday ) == 0 )
				{
					//Duplicate birthday
					printf( ", %s(%d)", studentA[j].name, studentA[j].id );
					studentA[j].checked = 1;
					done++;
				}
				else
				{
					j++;
				}
			}
		}
	}
	printf( "\n" ); //Newline to clean up printing

	//Reset process counters on student array
	for ( int i = 0; i < 10; i++ )
        {
                studentA[i].checked = 1;
        }
	fclose(dataF);	
}
