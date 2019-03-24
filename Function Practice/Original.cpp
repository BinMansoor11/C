#include <stdio.h>
 
long factorial(int);
 
int main()
{
  int a;
  long fact = 1;
 
  printf("******************FACTORIAL**********************\n\nEnter a Number to Calculate it's Factorial:\n");
  scanf("%d", &a);
 
  fact=factorial(a);
  printf("%d! = %ld\n",a , fact);
 
  return 0;
}
 
long factorial(int a)
{
  int i;
  long fact = 1;
 
    fact = fact(int a-1) * i;
 
  return fact;
}
