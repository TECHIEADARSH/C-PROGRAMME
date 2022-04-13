#include<stdio.h>
int main()
{int x=3;
x+= x++ + --x*4;
printf("\n there result x+= x++ + --x*4 %d",x);
return(0);
}
