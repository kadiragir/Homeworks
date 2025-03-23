#include <stdio.h>
#include <math.h>
int computeHomeValue(int popularity, int size);

int main(void)
{
  int popularity;
  int size;
  int homeValue; 
  
  printf("Enter popularity\n");
  scanf("%d", &popularity);
  
  printf("Enter size\n");
  scanf("%d", &size);
  
  homeValue = computeHomeValue(popularity, size);
  printf("%d", homeValue);
  
  getchar();	
  getchar();

  return 0;
}

int computeHomeValue(int popularity, int size)
{
  int homeValue;  
     
  homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000; 
  
  return homeValue;  
    
    }
