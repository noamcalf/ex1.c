/******************
Name:noam calfon
ID:323872929
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  printf("What bit:\n");
int number, position;
  printf("please enter a number: ");
  scanf("%u", &number);
  printf("please enter a position: ");
  scanf("%d", &position);
  unsigned int bit = (number >> position) & 1;
  printf("the bit in position %d of number %d is : %u\n", position, number, bit);

  // Set bit
  printf("\nSet bit:\n");
  printf("please enter a number: ");
  scanf("%u", &number);
  printf("please enter a position: ");
  scanf("%d", &position);
   unsigned int a = number | (1 << position);
   unsigned int b = number & ~(1 << position);
  printf("number with %d bit set to 1 is : %u\n", position, a);
  printf("number with %d bit set to 0 is : %u\n", position, b);

  // Toggle bit
  printf("\nToggle bit:\n");
  printf("please enter a number: ");
  scanf("%u" , &number );
  printf("please enter a position: ");
  scanf("%d", &position );
unsigned int c = number ^ (1 << position);
  printf("number with bit %d toggled is %u\n", position, c);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("please enter a number: ");
  scanf("%u", &number );
  unsigned int d = (number & 1) ^ 1;
  printf("%u\n", d);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  int number1, number2;
  printf("please enter the first number (octal): ");
  scanf("%o", &number1 );
  printf("please enter the second number (octal): ");
  scanf("%o", &number2 );
  unsigned int sum12 = number1 + number2;
  printf("the sum in hexadecimal is :%x\n", sum12);
  int firstletter = (sum12 >> 3)  & 1;
  int secondletter = (sum12 >> 5) & 1;
  int thirdletter = (sum12 >> 7) & 1;
  int fourthletter = (sum12 >> 11) & 1;
printf("the 3,5,7,11 bits are: %u%u%u%u\n" ,firstletter, secondletter, thirdletter, fourthletter);

  printf("Bye!\n");
  
  return 0;
}
