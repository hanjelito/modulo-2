
#include <unistd.h>
/*#include <stdio.h>*/

/*void	ft_putchar(char c)
{
write(1,&c,1);
}
*/
void ft_putstr(char *str){
str="MUNDOCRUEL";
int c=0;
while (str[c] != '\0')
{

ft_putchar(str[c]);
c++;


}


}

/*
int main(){
     char cad;
     ft_putstr(&cad);
    
    return 0;
}
*/