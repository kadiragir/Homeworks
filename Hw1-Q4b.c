#include <stdio.h>
#include <math.h>

void computeHomeValue(void);

int main(void)
{
  
  computeHomeValue();
  
  getchar();	
  getchar();	
  
  return 0;
}

void computeHomeValue(void)
{
  int popularity;
  int size;
  int homeValue; 
  
  printf("Enter popularity\n");
  scanf("%d", &popularity);
  
  printf("Enter size\n");
  scanf("%d", &size);
     
  homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000; 
  
  printf("Home value is %d\n", homeValue);  

}
