#include<stdio.h>
#include<math.h>

int main ()
{
	int arr[5][5];
    	int i, j, normal, trace = 0, rows, columns, sum = 0, temp = 0;
    	printf("\nEnter Number of Rows of Matrix:\t");
    	scanf("%d", &rows);
    	printf("\nEnter Number of Rows of Matrix:\t");
    	scanf("%d", &columns);
    	printf("\nEnter the Elements of Matrix:\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
            		scanf("%d", &arr[i][j]);
		}

	}
	for (i = 0; i < rows; i++)
    	{
        	for (j = 0; j < columns; j++)
        	{
            		temp = arr[i][j] * arr[i][j];
            		sum = sum + temp;
        	}
    	}
    	normal = sqrt(sum);
	printf("\nThe Matrix\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j< columns; j++)
		{
            		printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	i=0;
	do{
	    trace = trace + arr[i][i];
        i++;
	}
	while(i< rows);

    	printf("\nTrace of Matrix:\t%d\n", trace);
    	printf("\nNormal of Matrix:\t%d\n", normal);
 	return 0;
}
