#include<stdio.h>
int main()
{int x=10;
int y=0;
y=x++ + ++x + x++ + ++x;
printf("\n there result x++ + ++x + x++ + ++x %d",y);
return(0);
}
