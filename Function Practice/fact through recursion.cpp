#include <stdio.h>
 
long factorial(int);
 
int main()
{
  int a;
  int fact = 1;
 
  printf("******************FACTORIAL**********************\n\nEnter a Number to Calculate it's Factorial:\n");
  scanf("%d", &a);
 
  fact=factorial(a);
  printf("%d! = %d\n",a , fact);
 
  return 0;
}
 
long factorial(int a)
{
  int i;
  int fact = 1;
 
    fact = fact(a-1) * i;
 
  return fact;
}
