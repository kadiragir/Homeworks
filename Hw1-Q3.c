#include <stdio.h>
#include <math.h>

int main(void)
{
  int homeValue;
  int popularity;
  int size;
  
  printf("Enter popularity\n");
  scanf("%d", &popularity);
  
  printf("Enter size\n");
  scanf("%d", &size);
  
  homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;
  
  printf("Home Value is %d\n", homeValue);
  
  getchar();	
  getchar();
  
  return 0;
}
