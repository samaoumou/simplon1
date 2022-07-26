#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int xoolal(char s[50]){                                                //création d'une fonction qui permet de compter le nombre de chiffre present
int count=0;
for (int i=0; i<strlen(s);i++)
{
    if(s[i]>='0'&& s[i]<='9')
    {
        count++;    
    }
}
if (strlen(s)==count)
{
    return 1;
}
return 0;
}
int main()
{
char nmbr[50];
char nom[50]=" ";
char prenom[50]=" ";
char matiere[50]=" ";
float note1,tt,moy,note,note2;
int i=4,coef,somcoef=0,tt_som=0;    
printf("entrer le nom et prenom de l'apprenant: %s %s",nom,prenom);
scanf("%s %s",&nom,&prenom);
printf("entrer le nombre de matiere dont il a composé: ");
scanf("%s",&nmbr);
while (xoolal(nmbr)==0)
{
    printf("incorrecte veuillez entrer des entiers : ");
    scanf("%s",&nmbr);
}
for ( i = 0; i < 3; i++)                                             
{   
    printf("entrer la discipline: ",matiere);
    scanf("%s",&matiere);                                                      
    printf("entrer les deux notes en %s : ",matiere);        
    scanf("%f %f",&note1,&note2);
    while (note1<0 || note1>20 || note2>20 || note2<0)
    {
        printf("veuillez entrer des notes comprises entre 0 et 20: ");
        scanf("%f %f",&note1,&note2);    
    }                                      
    printf("entrer son coef: ");
    scanf("%d",&coef);
    note=(note1+note2)/2;                                 
    somcoef=somcoef+coef;
    tt=note*coef;
    tt_som=tt_som+tt;                                                      
    printf("la moyenne en %s est %f\n",matiere,note);                             
}
moy=(tt_som)/somcoef;
printf("sa moyenne générale est %f ",moy);
printf("et sa mention est ");
if (moy<10)
{
    printf("médiocre");
}
else if (moy==10)
{
    printf("passable");
}
else if (moy>=12 && moy<=14)
{
    printf("trés bien");
}
else if (moy>14)
{
    printf("excellent");
}
return 0;
}
