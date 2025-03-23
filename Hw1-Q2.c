/* Addition Program */
#include <stdio.h>

int main(void)
{
  int integer1; /* first number taken as a input */
  int integer2; /* second number taken as a input */
  int sum;  /* result of the addition */ 
  
  printf("Enter first integer\n"); 
  scanf("%d",&integer1);
  
  printf("Enter second integer\n");
  scanf("%d",&integer2);
  
  sum = integer1 + integer2; 
  
  printf("Sum is %d\n", sum);
  
  	
  return 0;
}
