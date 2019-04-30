//Anik_Modak
#include<stdio.h>

int main()
{
    FILE *in, *out1, *out2;

    in = fopen("inputfile.txt","r");
    out1 = fopen("Ascending.txt","w");
    out2 = fopen("Descending.txt","w");

    int a[105], i=0, n, tm;
    while(fscanf(in,"%d",&a[i])==1) i++;
    n = i;

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                tm=a[j];
                a[j]=a[i];
                a[i]=tm;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        fprintf(out1,"%d\n",a[i]);
        fprintf(out2,"%d\n",a[n-i-1]);
    }
    return 0;
}
