#include <stdio.h>
  fact()
{
  int i, Number; 
  long Factorial = 1;
 
  printf("\n Please Enter any number to Find Factorial\n");
  scanf("%d", &Number);
 
  for (i = 1; i <= Number; i++)
   {
     Factorial = Factorial * i;
   }
 
  printf("\nFactorial of %d = %d\n", Number, Factorial);
 
 // return 0;
}
