#include<stdio.h>
#include<string.h>
void write()
{
	FILE *people = fopen("people.txt","w");
	fprintf(people,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\m%s\n","Allie ","Tommy ","Jacob ","Shelby ","Waldo ","Timmy ","Bob ","Brett ","Mario ");
	fclose(people);
}

void output()
{
	int size = 0;
	char peeps[10000][10];
	FILE *people = fopen("C:people.txt","r");
	while(fscanf(people,"%s",peeps[size]) != EOF)
	{
		++size;
	}
	fclose(people);
	peeps[size][10];
	printf("%s",peeps[8]);
}

int main()
{
	write();
	output();
	getchar();
	return 0;
}
