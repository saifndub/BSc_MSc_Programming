#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
   /*int m = abs(200);     // m is assigned to 200
   int n = abs(-400);    // n is assigned to -400

   printf("Absolute value of m = %d\n", m);
   printf("Absolute value of n = %d \n",n);

   int i =-400;
   int j = 200;

   if(abs(i)>abs(j))
    printf("Saif");

   return 0;


   int saif = 1;

   do{
      printf("Saif is : %d",saif);
      saif++;
   }while(saif<1);

   double x = 86.366130;

    printf("x: %.1f\n", x);

    double res1 = f_round(x, 2);
    double res2 = round(100 * x) / 100;

    printf("Rounded with snprintf: %.1f\n", res1);
    printf("Rounded with round, then divided: %.1f\n", res2);*/


    double d = 100.23456;

printf("%f", f_round(d, 4));// result: 100.2346

printf("%f", f_round(d, 2));// result: 100.23
}
