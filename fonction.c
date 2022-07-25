#include <stdio.h>
void inverser(int *nombreA,int *nombreB){
    int temporaire=0;
    temporaire=*nombreA;
    *nombreA=*nombreB;
    *nombreB=temporaire;
}
int main(void){
    int nombreA = 12;
    int nombreB = 13;
    //printf("addresse du nombreB = %p\n",&nombreB);
    printf("fonction avant : A=%d et B=%d\n",nombreA,nombreB);
    inverser(&nombreA,&nombreB);
    printf("fonction apres : A=%d et B=%d\n",nombreA,nombreB);
    return 0;
}