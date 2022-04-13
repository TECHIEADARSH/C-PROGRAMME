#include<stdio.h>
int main()
{int a=12,b=30;
a+=(a++)+(2*b++)+(++a)+3*b;
printf("there result a+=(a++)+(2*b++)+(++a)+3*b %d",a);
return(0);}
