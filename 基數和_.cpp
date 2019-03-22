#include<stdio.h>

int main()
{
	int x,y,z;
	
	printf("輸入一整數 (大於100): ");
	scanf("%d",&x);
	y=1;
	z=0;
	
	while(y<=x&&x>100){	
	z=z+y;
	y=y+2;
	
	
	}
	
	printf("sum:%d\n",z);
	return 0;
} 
