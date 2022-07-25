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
        /****************************************** la fonction principale***********************************/   
}