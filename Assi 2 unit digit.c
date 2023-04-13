#include<stdio.h>

int main()
{
  int a , unit_digite ;
  printf( "Enter the value of a\t");
  scanf("%d" , &a);
  unit_digite = a%10;
  printf("%d " , unit_digite);
  return 0;
}