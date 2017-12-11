#include <stdio.h>

int main()
{
   int number;

   printf("Enter an integer : ");
   scanf("%d", &number);

 ODDEVEN (number);
 DIVISOR (number);
   return 0;
}

int ODDEVEN (int number)
{
  if (number%2 == 0){
      printf("THIS NUMBER IS EVEN NUMBER\n");
   }else{
      printf("THIS NUMBER IS ODD NUMBER\n");

   }
   return 0;
}
int DIVISOR (int number)
{
  if (number%6 == 0){
      printf( "THIS NUMBER IS Divisble by 6");
   }else{
      printf("THIS NUMBER IS not Divisible by 6");
   }
   return 0;
}
