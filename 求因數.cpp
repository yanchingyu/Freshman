#include<stdio.h>

int main()
{
	int n,i;
	printf("n= ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	if(n%i==0){
			printf("n���]��: %d\n",i);
	}	
		return 0;
	
}
