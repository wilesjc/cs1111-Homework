#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Create Structure for storing Student data
	struct Student_t
	{
		int id;
		char name[20];
		char bday[10];
	};
	typedef struct Student_t student;

	//Make an array of students that can be itterated through for reading and comparing data later
//	student studentA[10];

	//Open file so data can be read
	FILE *dataF;
	dataF = fopen("student.txt", "r");

	//Make sure the file was opened so the rest of the code can work properly
	if (dataF == NULL)
	{
		printf("That file didn't open!\n");
		return -1;
	}

	//Make space to store all of the data from the file so that there is room for it
	char *dataSpace = malloc(1024);

	//Make sure the space was allocated
	if (dataSpace == NULL)
	{
		printf("Space wasn't allocated!\n");
		return -1;
	}
	
	//Read data from file to compare birthdates
	//fgets(dataSpace, 1024, dataF);
	student studentTest[5];
	studentTest[0].id = 5;
//	fscanf(dataF, "%d%19c%9c", studentA[0].id, studentA[0].name, studentA[0].bday);
	printf("%d%s%s\n", studentTest[0].id, studentTest[0].name, studentTest[0].bday);
	//Compare each student's birthday to check for duplicates + print out matches
	//
	//
	//
	//
	//
	
	//Cleanup (to avoid mempry leaks)-> dataF + dataSpace + 
	fclose(dataF);
	free(dataSpace);
}
