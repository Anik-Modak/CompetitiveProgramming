#include <stdio.h>

int main()
{
	int H, D, F, dia;
	float U, alt, f;

	while(1)
	{
		scanf("%d %f %d %d", &H, &U, &D, &F);
		if(H == 0) break;
		dia = 1;
		alt = 0;
		f = U*F/100;
		while(1){
			alt += U;
			if(U > 0)
				U -= f;
			if(alt > H) break;
			alt -= D;
			if(alt < 0) break;
			dia++;
			printf("%.2f ",alt);
		}
		if(alt < 0)
			printf("failure on day %d\n", dia);
		else
			printf("success on day %d\n", dia);
	}
	return 0;
}
 10.50 9.50 8.50 7.50 6.50 5.50
  4.50 3.50 2.50 1.50 0.50 failure on day 32
  10.50 9.35 8.20 7.05 5.90 4.75
  3.60 2.45 1.30 0.15 failure on day 31

