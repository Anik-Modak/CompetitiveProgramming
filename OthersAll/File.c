#include<stdio.h>
#include<conio.h>
main()
{
    int k=0;
    double v,avg,s=0;
    FILE *fpin,*fpout;

    if((fpin=fopen("values.dat","r"))==NULL)
        printf("cannot open\n");
    else{
        while(!feof(fpin)){
            fscanf(fpin,"%lf",&v);
            s=s+v;
            k++;
        }
    }
    avg=s/k;
    if((fpout=fopen("average.res", "w"))==NULL)
        printf("cannot open\n");
    else
        fprintf(fpout,"average:%.3lf\n",avg);
    fclose(fpin);
    fclose(fpout);
    getch();
}
