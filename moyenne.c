#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
int xoolal(char s[50])
{
    int count=0;
    for ( int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='0' && s[i]<='9')
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
int tab[5];
char nom[50]=" ";
char prenom[50]=" ";
char matiere[50]=" ";
float note1,tt,moy,note,note2;
int n=0,i=4,note,coef,som=0,somcoef=0,moy,tt,tt_som=0;    //la déclaration de l'ensemble des élément qu'on va avoir besoin
printf("entrer le nom et prenom de l'apprenant: %s %s",nom,prenom);
scanf("%s %s",&nom,&prenom);
printf("entrer le nombre de matiere dont il a composé: ");
scanf("%s",&nmbr);
while (xoolal(nmbr)==0)
{
    printf("incorrecte veuillez entrer des entiers : ");
    scanf("%s",&nmbr);
}
for ( i = 0; i < 4; i++)                                             //le parcour du tableau
{   
    printf("entrer la discipline: ",matiere);
    scanf("%s",&matiere);                                                      //l'incrementation en ieme note
    printf("entrer les deux notes en %s : ",matiere);        
    scanf("%d %d",&note1,&note2);
    while (note1>20 || note2>20)
    {
        printf("veuillez entrer des notes correcte: ");
        scanf("%d %d",&note1,&note2);    
    }                                      //lire à chaque fois la note saisi
    printf("entrer son coef: ");
    scanf("%d",&coef);
    note=(note1+note2)/2;                                      //................le coef                                         
    somcoef=somcoef+coef;
    tt=note*coef;
    tt_som=tt_som+tt;                                                     //stocker la note obtenu multiplier par son coef sur une variable pour faciliter 
    printf("la moyenne en %s est %d\n",matiere,note);                           //le calcule de la moyenne   
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
