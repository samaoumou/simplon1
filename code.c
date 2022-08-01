#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
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
int main(){
    char code[50];
    int i=0;
    printf("entrer ton code: ");
    scanf("%s",&code);
    while (verif(code)==0)
    {
        printf("entrer entrer des nombres: ");
         scanf("%s",&code);
    }
    int Tab[3] = {111,222,333};
    int a=3;  
    while (atoi(code)!=Tab[i])
    {     
        if (i<3)
        {     
            i++;
        }
        else 
            {     
                if(a>1)
                    {   
                        a--;       
                        printf("incorrecte il vous reste %d tentative: ",a);         
                        scanf("%s",&code);         
                        i=0;         
                            
                    }
                else 
                   { 
                        printf("fin de tentative");     
                        return 0;     
                   }      
            } 
    }    
    printf("correcte");
return 0;    
}