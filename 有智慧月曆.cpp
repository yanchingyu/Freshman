#include<stdio.h>


int main()
{
	int day; //���Ӥ몺1���O§���X  
	int dom; //���Ӥ릳�X�� 
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
