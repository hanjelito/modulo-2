#include <unistd.h>
 #include <stdio.h>

void ft_ft(int *nbr)
{
*nbr=42;

}


int main(void)
{
  int n=1;
  int  *p1;
  p1=&n;
  ft_ft(p1);
  printf("%d",n);

}
