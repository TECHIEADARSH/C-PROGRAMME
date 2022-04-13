#include<stdio.h>
int main()
{int a=10,b=8.0;
int x=0;
x=++a-b--;
printf("\n there result ++a-b-- %d",x);
 int y=0;
y=a%b++;
printf("\n there result a%b++ %d",y);
return(0);
}
