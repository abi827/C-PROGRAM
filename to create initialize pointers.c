#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int *ptr;
  ptr = &num;
  printf("Value of num : %d \n", num);
  printf("Memory Address of num : %d \n", &num);
  printf("Pointer Points to : %d \n", ptr);
  printf("Value of pointer : %d \n", *ptr);
  printf("Memory Address of pointer : %d \n", &ptr);
}
