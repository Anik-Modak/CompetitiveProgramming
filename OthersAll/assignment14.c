#include<stdio.h>
#include<string.h>
sort(int *n){
    int i,j,seatno[100],temp;
    for(i=0;i<n;i++){
    scanf("%d",&seatno[i]);
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
         if(seatno[i]<seatno[j]){
            temp=seatno[j];
            seatno[j]=seatno[i];
            seatno[i]=temp;
         }
    }
    printf("Seat No[%d]: = %d\n",i+1,seatno[i]);
    }
}
void seatPlan ( int n){
    FILE *fp;
    int i,j;
    char str[10][50],Name[50];

    printf("Name of Participants:\n");
    for(i=0;i<n;i++)
    scanf("%s",str[i]);
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++){
                if(strcmp(str[i],str[j])>0){
                    strcpy(Name,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],Name);
        }
    }
    printf("\Seat Order:\n");
    fp=fopen("Name.txt","w");
        for(i=0;i<n;i++){
            puts(str[i]);
            fprintf(fp,"%s\n",str[i]);
        }
    fclose(fp);
}

int main (){
    int parNo,ck;
    printf("Programming Competition 2017\n");
    L:
        printf("Number of Participants:\n");
        scanf("%d",&parNo);
        seatPlan(parNo);
        sort(parNo);

        printf("Is the contest over? (1-Yes 2-No)");
        scanf("%d",&ck);

        switch(ck){
        case 2:
            break;
        case 1:
            goto L;
            break;
        }
}
