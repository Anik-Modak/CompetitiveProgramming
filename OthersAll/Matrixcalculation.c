#include<stdio.h>
#include<string.h>
int A[10][10],B[10][10],m,n,p,q;
input()
{
    int i,j;
    printf("Enter matrix A:\n");
    printf("Row & colum:");
    scanf("%d%d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter matrix B:\n");
    printf("Row & colum:");
    scanf("%d%d",&p,&q);

    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&B[i][j]);
        }
    }
}

addition(int first[10][10],int second[10][10])
{
    int i,j,sum[10][10];
    if(m!=p&&n!=q)
        printf("These matrix can't be added with each other.\n");
    else{
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                sum[i][j]=first[i][j]+second[i][j];
            }
        }
        printf("Addition of A&B:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
    }
}

subtraction(int first[10][10],int second[10][10])
{
    int i,j,sub[10][10];
    if(m!=p&&n!=q)
         printf("These matrix can't be added with each other.\n");
    else{
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                sub[i][j]=first[i][j]-second[i][j];
            }
        }
    }
    printf("Subtraction of A&B:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
}
multiplication(int first[10][10],int second[10][10])
{
   int i,j,k,sum,mul[10][10];
    if (n!=p)
        printf("These matrix can't be multiplied with each other.\n");
    else{
        i=0;
        while(i<m){
            for (j=0; j<q; j++)
            {
                sum=0;
                for (k=0; k<p; k++) sum = sum + first[i][k]*second[k][j];
                mul[i][j]=sum;
            }
            i++;
        }
        printf("Multipication of A&B:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++) printf("%d ",mul[i][j]);
            printf("\n");
        }
   }
}
transpose(int a[10][10],int *x,int *y)
{
	    int i,j,a1[10][10];
    if(m!=n)
        printf("There is no transpose this matrix\n");
    else{
	    for(i=0; i<*x; i++){
        	for(j=0; j<*y; j++){
        		a1[i][j]= a[j][i];
        	}
    	}
    	for(i=0; i<*x; i++){
        	for(j=0; j<*y; j++){
                printf("%d ",a1[i][j]);
        	}
        	printf("\n");
    	}
    }
}

int main()
{
    char c[10];
    int r,s,t,u,v,*x,*y;
    input();
    do{
        scanf("%s",c);
        r=(strcmp(c,"subtraction"));
        s=(strcmp(c,"multiplication"));
        t=(strcmp(c,"addition"));
        u=(strcmp(c,"transpose"));
        v=(strcmp(c,"End"));

        if(r==0)
            subtraction(A,B);
        else if(s==0)
            multiplication(A,B);
        else if(t==0)
            addition(A,B);
        else if(u==0){
            printf("Transpose of Matrix A:\n");
            transpose(A,&m,&n);
            x=&p;
            y=&q;
            printf("Transpose of Matrix B:\n");
            transpose(B,&p,&q);
            x=&m;
            y=&n;
        }
        else if(v==0) break;
        else printf("wrong word please enter correct word\n");
    }
    while(1);
    return 0;
}

