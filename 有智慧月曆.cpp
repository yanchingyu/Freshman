#include<stdio.h>


int main()
{
	int day; //那個月的1號是禮拜幾  
	int dom; //那個月有幾天 
	int i=1;  
	
	printf("Enter your day:");
	scanf("%d",&day);
	printf("Enter your dom:");
	scanf("%d",&dom);
	for(i=1;i<=dom;i++)
	{
		printf("%d   ",i);
		if(day==0)
			printf("%d\n",7);
		else
			printf("%d\n",day);
		day=(day+1)%7;	
		
	}
	
	return 0;
}
