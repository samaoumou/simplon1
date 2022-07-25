#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int verif(char s[50]){                                                //création d'une fonction qui permet de compter le nombre de chiffre present
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
int tab[5];
char nom[50]=" ";
char prenom[50]=" ";
char matiere[50]=" ";
int n=0,i=5,note,coef,som=0,somcoef=0,moy,tt,tt_som=0;    //la déclaration de l'ensemble des élément qu'on va avoir besoin
printf("entrer le nom et prénom de l'apprenant: %s %s",nom,prenom);
scanf("%s %s",&nom,&prenom);
for ( i = 0; i < 2; i++)                                             //le parcour du tableau
{
    n++; 
    printf("entrer la discipline: ",matiere);
    scanf("%s",&matiere);                                                      //l'incrementation en ieme note
    printf("entrer la note en %s \n",matiere);        
    scanf("%d",&tab[i]);                                       //lire à chaque fois la note saisi
    printf("entrer son coef: ");
    scanf("%d",&coef);                                      //................le coef                                         
    somcoef=somcoef+coef;
    tt=tab[i]*coef;                                                     //stocker la note obtenu multiplier par son coef sur une variable pour faciliter 
    printf("le total dans cette matiére est %d\n",tt);                           //le calcule de la moyenne
    tt_som=tt_som+tt;
}
moy=(tt_som)/somcoef;
printf("sa moyenne générale est %d ",moy);
printf("maintenant on va se focaliser sur sa mention !!! --> ");
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
