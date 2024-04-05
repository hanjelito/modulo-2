#include <unistd.h>
 #include <stdio.h>

void ft_swap(int *a, int *b)
{

int *aux;
 *aux= *a;
 *a=*b;
 *b=*aux;
}
 
 int main(void)
{
  int n1=7;
  int n2=3;
  int *p1;
  int *p2;
  p1=&n1;
  p2=&n2;
  ft_swap(p1,p2);
  printf("%d",n1);
  printf("\n%d",n2);

}
