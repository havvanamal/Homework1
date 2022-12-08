#include<stdio.h>
int main(){
	
	int d,n,bs;
	bs=0;
	printf("Sayi giriniz: ");
	scanf("%d",&n);
	
  while(n>0)
	{
		n=n/10;
		bs++;
	}
	printf("Basamak Sayisi: %d",bs);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
