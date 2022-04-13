#include<stdio.h>
#include<math.h>
int main(){
	int n,ans=0,digit;
	int max=pow(2,31)-1, min=pow(-2,31);
	scanf("%d",&n);
	while(n!=0){
	digit=n%10;
	if(ans>max || ans<min){
		return(0);
	}
	else{
	ans=ans*10+digit;	
		n=n/10;
		}}
	printf("%d\n",ans);
}
/*#include<stdio.h>  
 int main()    
{    
int n, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}   */
