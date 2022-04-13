#include<stdio.h>
int main()
{int j=5;
int x=0;
x=(5*++j)%6;
printf("\n there result (5*++j)%6 %d",x);
x=(5*j++)%6;
printf("\n  there result (5*j++)%6 %d",x);
return(0);
}
