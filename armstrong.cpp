#include<stdio.h>
int main(){
	int i,n,sum=0,a,b;

	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
	}
	
	int k=n;
	while(n!=0){
	a=n%10;
	sum=sum+(a*a*a);
		n=n/10;}
	
	if(k==sum)
	printf("YES DADDY.YES AHHH");
	else
	printf("NO  SUGER DADDY");
	return 0;
}
