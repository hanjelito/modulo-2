#include <unistd.h>
/*#include <stdio.h>*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
*div= a/b;
*mod= a%b;
}

/*
int main(){
   
    int endo=8;
    int sor=2;
    int div;
    int rest;
    
    
    ft_div_mod(endo,sor,&div,&rest);
    printf("el dividendo es:%d, el divisor es:%d \n el cociente es:%d y residuo:%d",endo,sor,div,rest);
    
    return 0;
}
*/