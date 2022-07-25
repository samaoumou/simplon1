#include <stdio.h>
int main(){
    int tab[]={1,2,3};
    int *p;
    p=&tab[3];
    printf("%p",p);
    return 0;
}