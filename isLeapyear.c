#include <stdbool.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isLeapYear(int year)
{
	if(year % 4 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		fprintf(stderr, "Invalid amount of arguements\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		for(int i = 1; i < argc; i++)
		{
			char *check;
			int year = atoi(argv[i]);
			if(isLeapYear(year) == true)
			{
				check = "true";
			}
			else
			{
				check = "false";
			}
			printf("%i is a leap year - %s", year, check);
		}
		exit(EXIT_SUCCESS);
	]
}
