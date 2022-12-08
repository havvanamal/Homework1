#include<stdio.h>
int main(){
	
	int a,n;
	float sum;
	sum=0;
	scanf("%d",&n);
	for(a=2; a<=n; a=a+2)
	{
		sum= sum+(1/a);
		
	}
	
	
	printf("%f",sum);
	
	
	
	
	
	
	
	
	return 0;
}
