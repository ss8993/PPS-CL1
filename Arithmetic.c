/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int n1,n2;
int sum,sub,mult,mod;
float division;
printf("Enter any two number:");
scanf("%d \n%d",&n1,&n2);
sum=n1+n2;
sub=n1-n2;
mult=n1*n2;
division=(float)n1/n2;
mod=n1%n2;
printf("SUM=%d\n",sum);
printf("DIFFERENCE=%d\n",sub);
printf("PRODUCT=%d\n",mult);
printf("QUOTIENT=%f\n",division);
printf("MODULUS=%d",mod);
return 0;
}




