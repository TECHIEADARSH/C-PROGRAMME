#include<stdio.h>
int main()
{float f=0,c=0;
printf("ENTER temp in cent? ");
scanf("%f", &c);
f=((c*9)/5)+32;
printf("fahareit is: %f ",f);
printf("\r ENTER temp in f? ");
scanf("%f", &f);
c=((f-32)*5)/9;
printf("\r celcius is: %f",c);}
/*
 escape sequences.
 \n
 \t
 \b
 \\
 \"
 \r
 */
