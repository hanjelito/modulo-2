#include <unistd.h>
/*#include <stdio.h>*/

void ft_ultimate_div_mod(int *a, int *b)
{
int div;
int rest;
div=*a / *b;
rest=*a % *b;
*a=div;
*b=rest;

}

/*
int main(){
    
    int a=10;
    int b=2;
    
    ft_ultimate_div_mod(&a,&b);
    printf("el cociente es:%i, el residuo es:%i",a,b);
    
    return 0;
}
*/
