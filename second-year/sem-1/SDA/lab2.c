#include <stdlib.h>
#include <stdio.h>
#include <string.h>

FILE *f;
struct ocupatie
{
    int cod;
    char denumire[350];
}a[5000];

char s[350];
int cod,i=0;

int binarysearch(struct ocupatie a[],int s, int d,int x)
{
    if(s<=d)
    {
        int mij=(s+d)/2;
        if(a[mij].cod==x)
            return mij;
        if(a[mij].cod>x)
            return binarysearch(a,mij+1,d,x);
        if(a[mij].cod<x)
            return binarysearch(a,s,mij-1,x);
    }
    else
    {
        return -1;
    }
}
int verif(char a[],char b[])
{
    if(strncmp(a,b,strlen(b))==0)
        return 1;
    return 0;
}
int main()
{
    if((f=fopen("COR_Descrescator.txt","r"))==NULL)
    {
        printf("eroare fisier");
        exit(EXIT_FAILURE);
    }
    fgets(s,350,f);
    while(!feof(f))
    {
        fscanf(f, "%d %[^\n]s", &cod, s);
        strcpy(a[i].denumire,s);
        a[i].cod=cod;
        i++;
    }
    printf("introduceti cod:");
    int x;
    scanf("%d",&x);
    int nr=binarysearch(a,0,i-1,x);
    if(nr==-1)
        printf("COD INEXISTENT\n");
    else
        printf("%s\n",a[nr].denumire);
    char s2[350];
    scanf("%s",s2);
    for(int j;j<i-1;j++)
    {
        if(verif(a[j].denumire,s2)==1)
            printf("%s\n",a[j].denumire);
    }
    fclose(f);
}