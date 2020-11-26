#include<stdio.h>
#include <string.h>

int main()
{
	FILE *the_file = fopen("Shivansh.csv", "r");
	if(the_file == NULL)
	{
		perror("Unable to open the file");
		return(0);
	}

	char line[200];

while(fgets(line, sizeof(line), the_file))
{
	char *token;
	token = strtok(line, ",");

	while(token != NULL)
	{
		printf("%s, ", token);
		token = strtok(NULL, ",");
	}
printf("\n");
}
}


